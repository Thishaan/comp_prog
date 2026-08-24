#include <iostream>
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
    ListNode* reverseList(ListNode* head) {

        if (head == nullptr)
            return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;

        int iteration = 1;

        while (curr && curr->next) {

            cout << "\n========== ITERATION " << iteration << " ==========\n";

            cout << "BEFORE changes:\n";
            cout << "prev:   ";
            if (prev)
                cout << prev->val << '\n';
            else
                cout << "nullptr\n";

            cout << "curr:   " << curr->val << '\n';
            cout << "curr->next: " << curr->next->val << '\n';

            ListNode* second = curr->next->next;
            ListNode* nxt = curr->next;

            cout << "nxt:    " << nxt->val << '\n';

            cout << "second: ";
            if (second)
                cout << second->val << '\n';
            else
                cout << "nullptr\n";

            cout << "\nPerforming:\n";
            cout << "nxt->next = curr\n";
            nxt->next = curr;

            cout << "curr->next = prev\n";
            curr->next = prev;

            if (second) {
                cout << "second->next = curr\n";
                second->next = nxt;
            }
            else {
                cout << "second is nullptr, so head = nxt\n";
                head = nxt;
            }

            cout << "\nAFTER pointer changes:\n";

            cout << "nxt " << nxt->val << " -> ";
            if (nxt->next)
                cout << nxt->next->val << '\n';
            else
                cout << "nullptr\n";

            cout << "curr " << curr->val << " -> ";
            if (curr->next)
                cout << curr->next->val << '\n';
            else
                cout << "nullptr\n";

            if (second) {
                cout << "second " << second->val << " -> ";

                if (second->next)
                    cout << second->next->val << '\n';
                else
                    cout << "nullptr\n";
            }

            prev = curr;
            curr = second;

            cout << "\nMoving pointers:\n";

            cout << "prev = ";
            if (prev)
                cout << prev->val << '\n';
            else
                cout << "nullptr\n";

            cout << "curr = ";
            if (curr)
                cout << curr->val << '\n';
            else
                cout << "nullptr\n";

            iteration++;
        }

        cout << "\n========== LOOP ENDED ==========\n";

        cout << "curr: ";
        if (curr)
            cout << curr->val << '\n';
        else
            cout << "nullptr\n";

        cout << "head: ";
        if (head)
            cout << head->val << '\n';
        else
            cout << "nullptr\n";

        return head;
    }
};

void printList(ListNode* head) {

    cout << "List: ";

    while (head) {
        cout << head->val;

        if (head->next)
            cout << " -> ";

        head = head->next;
    }

    cout << '\n';
}

int main() {

    // 1 -> 2 -> 3 -> 4 -> 5

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "ORIGINAL:\n";
    printList(head);

    Solution sol;

    head = sol.reverseList(head);

    cout << "\nRETURNED LIST:\n";
    printList(head);

    return 0;
}
