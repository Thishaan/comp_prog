#include <iostream>
#include <stack>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:

    void reorderList(ListNode* head) {

        ListNode* curr = head; 
        stack<ListNode*> tops;

        // so we can effectively pop off
        while (curr) {
            tops.push(curr);
            curr = curr->next;
        }

        // return list as is
        if (tops.size() <= 2) {
            return;
        }

        curr = head;

        while (curr && curr->next && !tops.empty()) {

            cout << "\n--- ITERATION ---\n";
            cout << "curr: " << curr->val << endl;
            cout << "curr->next: " << curr->next->val << endl;
            cout << "stack top: " << tops.top()->val << endl;
            cout << "stack size: " << tops.size() << endl;

            // save ptrs
            ListNode* end = tops.top();
            tops.pop();

            ListNode* before_end = tops.top();
            ListNode* second = curr->next;

            cout << "end: " << end->val << endl;
            cout << "before_end: " << before_end->val << endl;
            cout << "second: " << second->val << endl;

            // manipulate pointers
            end->next = second;
            curr->next = end;
            before_end->next = nullptr;

           cout << "After pointer changes:" << endl;

           /** 
            cout << "curr " << curr->val
                 << " -> " << curr->next->val << endl;
            cout << "end " << end->val
                 << " -> " << end->next->val << endl;
            cout << "before_end " << before_end->val
                 << " -> nullptr" << endl;
            **/  
            curr = second;
     
//            cout << "new curr: " << curr->val << endl;
        }
    }
};


void printList(ListNode* head) {

    ListNode* curr = head;

    while (curr) {
        cout << curr->val;

        if (curr->next) {
            cout << " -> ";
        }

        curr = curr->next;
    }

    cout << endl;
}


int main() {

    // 1 -> 2 -> 3 -> 4 -> 5 -> 6

    ListNode* head = new ListNode(1);

    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "BEFORE:" << endl;
    printList(head);

    Solution sol;

    sol.reorderList(head);

    cout << "\nAFTER:" << endl;
    printList(head);

    return 0;
}
