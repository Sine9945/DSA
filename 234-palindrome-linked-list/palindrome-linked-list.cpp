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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        if (head == nullptr || head->next == nullptr) return true;
        string s = "";
        while(temp != nullptr){
            s += temp->val;
            temp = temp->next;
        }
        string s1(s);
        reverse(s.begin(),s.end());
        if (s == s1) return true;
        else return false;
    }
};