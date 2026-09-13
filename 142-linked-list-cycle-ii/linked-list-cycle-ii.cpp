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
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return nullptr;
        ListNode* temp = head;
        map<ListNode* , int> mp;
        int idx = 0;
        while(temp != nullptr){
            if (mp.find(temp) == mp.end()){
                mp.insert({temp,idx});
            } else {
                return temp;
                break;
            }
            idx++;
            temp = temp->next;
        }
        return nullptr;
    }
};