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
    int pairSum(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }
        int start = 0;
        ListNode* half_list = NULL;
        temp = head;
        while(temp != NULL){
            start++;
            if(start == cnt/2){
                half_list = temp;
                break;
            }
            temp = temp->next;
        }
        ListNode* curr = half_list;
        ListNode* prev = NULL;
        ListNode* nxt = half_list;
        while(nxt != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        half_list = prev;
        int end = 0;
        temp = head;
        int maximum = (half_list->val)+(temp->val);
        int sum = 0;
        while(end != cnt/2){
            sum = (half_list->val)+(temp->val);
            if(sum > maximum) maximum = sum;
            end++;
            temp = temp->next;
            half_list = half_list->next;
        }
        return maximum;
    }
};