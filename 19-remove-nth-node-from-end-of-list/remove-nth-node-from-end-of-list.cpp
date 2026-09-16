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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == nullptr){
            return nullptr;
        }
        int len = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            len++;
        }
        int target = len-n-1;
        int cnt = 0;
        if (n == len){
            temp = head->next;
            delete head;
            head = temp;
            return head;
        }
        temp = head;
        while(cnt != target){
            temp = temp->next;
            cnt++;
        }
        ListNode* temp1 = temp->next;
        
        temp->next = temp->next->next;
        delete temp1;
        
        return head;
    }
};