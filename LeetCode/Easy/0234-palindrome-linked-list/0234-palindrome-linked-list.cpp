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
    ll rev(ll head) {
        ll prev = nullptr;
        ll curr = head;
        while(curr) {
            ll next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ll slow = head;
        ll fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ll mid = rev(slow->next);
        while(mid){
            if(head->val != mid->val) return false;
            head = head->next;
            mid = mid->next;
        }
        return true;
    }
};