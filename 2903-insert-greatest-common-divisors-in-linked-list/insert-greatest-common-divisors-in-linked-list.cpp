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
    int greatestD(int x, int y) {
    if (y == 0) {
        return x;
    }
    return greatestD(y, x % y);
}

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head== NULL) return head;
        ListNode* temp = head;
        while(temp != NULL && temp->next != NULL)
        {
            ListNode* newNode = new ListNode(greatestD(temp->val , temp->next->val) , temp->next);
            temp->next=newNode;
            temp=newNode->next;
        }
        return head;
    }
};