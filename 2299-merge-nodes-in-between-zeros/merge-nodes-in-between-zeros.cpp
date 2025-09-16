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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* res = NULL;
        ListNode* res_temp = NULL;
        int sum = 0;
        while(temp!=NULL){
            if(temp->val != 0){
                sum += temp->val;
            }
            else{
                ListNode* Node = new ListNode(sum);
                if(res == NULL){
                    res = Node;
                    res_temp = Node;
                }
                else{
                    res_temp->next = Node;
                    res_temp = res_temp->next;
                }
                sum = 0;
            }
            temp = temp->next;
        }
        return res;
    }
};