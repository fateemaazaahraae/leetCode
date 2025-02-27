/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int countList(ListNode *list)
    {
        int count = 0;
        while (list != nullptr)
        {
            count++;
            list = list->next;
        }
        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int index = countList(head) - n;
        if (index == 0)
        {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode* prev = nullptr;
        ListNode* current = head;

        for (int i = 0; i < index; i++)
        {
            prev = current;
            current = current->next;
        }

        prev->next = current->next;
        delete current; // Free memory
        return head;
    }
};
