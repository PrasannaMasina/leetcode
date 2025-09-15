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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp_A = list1;
        int cnt = 0;
        while(cnt < a-1){
            temp_A = temp_A->next;
            cnt++;
        }

        ListNode* temp_B = temp_A;
        while(cnt <= b){
            temp_B = temp_B->next;
            cnt++;
        }

        ListNode* temp = list2;
        while(temp->next != NULL) temp = temp->next;
        
        temp_A->next = list2;
        temp->next = temp_B;
        return list1;
    }
};