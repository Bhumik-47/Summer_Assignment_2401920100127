/*
Question : Given head, the head of a linked list, determine if the linked list has a cycle in it.

Approach : Implemented slow and fast pointer technique (Floyd's Cycle-Finding Algorithm) to detect cycle in the given linked list.

Time complexity : O(n)
Space complexity : O(1)

*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
