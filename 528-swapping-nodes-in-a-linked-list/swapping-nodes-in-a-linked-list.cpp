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
    ListNode* swapNodes(ListNode* head, int k) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }
        temp = head;
        int start = k;
        int end = cnt-k+1;
        cnt = 0;
        int start_val = 0;
        int last_val = 0;
        ListNode* temp_start = NULL;
        ListNode* temp_end = NULL;
        while(temp != NULL){
            cnt++;
            if(cnt == start){
                start_val = temp->val;
                temp_start = temp;
            }
            if(cnt == end){
                last_val = temp->val;
                temp_end = temp;
            }
            temp = temp->next;
        }
        temp_start->val = last_val;
        temp_end->val = start_val;
        return head;
    }
};