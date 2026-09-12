/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        if (head == nullptr) return false;
        long long i = 10000;
        while(i--){
            temp = temp->next;
            if (temp == nullptr) break;
        }
        if (temp == nullptr) return false;
        return true;
    }
};