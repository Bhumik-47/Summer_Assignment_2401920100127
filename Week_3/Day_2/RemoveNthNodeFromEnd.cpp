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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        if(head->next==NULL) {
            head=NULL;
            return head;
        }
        ListNode*temp = head;
        ListNode*temp1 = head;
        int c=0;
        while(temp1!=NULL){
            c++;
            temp1=temp1->next;
        }
        if(c==n){
            head=head->next;
            return head;
        }
        for(int i=0; i<c-n-1; i++){
            temp=temp->next;
        }
          temp->next=temp->next->next;

      
        
        return head;
    }
};

/*
Time Complexity : O(n)
Space Complexity : O(1)

*/