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
typedef ListNode* ll;
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head) return head;
        vector<int> list;
        ll temp = head;
        while(temp){
            list.push_back(temp->val);
            temp = temp->next; 
        }
        sort(list.begin(),list.end());
        temp = head;
        for(auto&i : list){
            temp->val = i;
            temp = temp->next;
        }
        return head;
    }
};