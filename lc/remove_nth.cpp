#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* curr = head;
        int node_len{0};

        while (curr) {
            cout << "Counting node: " << curr->val << endl;

            curr = curr->next;
            node_len++;
        }

        cout << "node_len: " << node_len << endl;

        curr = head;

        for (int i = 0; i < node_len - n - 1; i++) {
            cout << "i: " << i
                 << ", curr: " << curr->val << endl;

            curr = curr->next;
        }

        cout << "curr before removal: " << curr->val << endl;
        cout << "curr->next: " << curr->next->val << endl;

        curr->next = curr->next->next;

        return head;
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val;

        if (head->next)
            cout << " -> ";

        head = head->next;
    }

    cout << endl;
}

int main() {

    ListNode* head = new ListNode(1);

    cout << "Before:" << endl;
    printList(head);

    int n;
    cout << "Enter n: ";
    cin >> n;

    Solution sol;
    head = sol.removeNthFromEnd(head, n);

    cout << "After:" << endl;
    printList(head);

    return 0;
}
