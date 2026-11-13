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
        bitset<100001> bst;
        for(auto &i: nums)
            bst[i] = 1;
        while(head && bst[head->val])
            head = head->next;

        ListNode *curr = head->next;
        ListNode *prev = head;
        while(curr){
            if(bst[curr->val]){
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