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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* res = NULL;
        ListNode* res_temp = NULL;
        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val < temp2->val){
                ListNode* newNode = new ListNode(temp1->val);
                temp1 = temp1->next;
                if(res == NULL) res = newNode;
                else res_temp->next = newNode;
                res_temp = newNode;
            }
            else{
                ListNode* newNode = new ListNode(temp2->val);
                temp2 = temp2->next;
                if(res == NULL) res = newNode;
                else res_temp->next = newNode;
                res_temp = newNode;
            }
        }
        while(temp1 != NULL){
            ListNode* newNode = new ListNode(temp1->val);
            if(res == NULL) res = newNode;
            else res_temp->next = newNode;
            res_temp = newNode;
            temp1 = temp1->next;
        }
        while(temp2 != NULL){
            ListNode* newNode = new ListNode(temp2->val);
            if(res == NULL) res = newNode;
            else res_temp->next = newNode;
            res_temp = newNode;
            temp2 = temp2->next;
        }
        return res;
    }
};