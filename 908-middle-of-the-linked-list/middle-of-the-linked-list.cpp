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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int length = 0;
        while(temp->next != nullptr){
            length++;
            temp = temp->next;
        }
        int ans = length % 2 == 0? length/2 : (length/2)+1;
        int cnt = 0;
        temp = head;
        while(cnt < ans && temp->next!=nullptr){
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
};