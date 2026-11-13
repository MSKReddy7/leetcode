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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(),nums.end());
        
        while(head && st.contains(head->val))
            head = head->next;

        ListNode *curr = head->next;
        ListNode *prev = head;
        while(curr){
            if(st.contains(curr->val)){
                curr = curr->next;
                continue;
            }
            prev->next = curr;
            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;
        return head;
    }
};