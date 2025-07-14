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
    int getDecimalValue(ListNode* head) {
        if(head == NULL) return 0;
       int num = 0;
       ListNode* temp = head;
       int cnt = 0;
       while(temp != NULL){
        cnt++;
        temp = temp->next;
       } 
       temp = head;
       while(cnt > 0){
        num += (pow(2, cnt-1)*temp->val);
        temp = temp->next;
        cnt--;
       }
       return num;
    }
};