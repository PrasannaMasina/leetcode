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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* res = NULL;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* newNode = new ListNode(temp->val);
            if(res == NULL){
                res = newNode;
                prev = newNode;
            }
            else{
                if(prev->val != temp->val){
                    ListNode* newNode = new ListNode(temp->val);
                        prev->next = newNode;
                        prev = newNode;
                }
            }
            temp = temp->next;
        }
        return res;
    }
};