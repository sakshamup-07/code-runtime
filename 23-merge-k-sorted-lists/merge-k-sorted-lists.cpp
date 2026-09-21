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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        int n = lists.size();
        for(int i=0;i<n;i++)
        {
            ListNode* curr =lists[i];
            while(curr != NULL)
            {
                arr.emplace_back(curr->val);
                curr=curr->next;
            }
        }
        sort(arr.begin() , arr.end());
        ListNode* head = NULL;
        for(int i =arr.size()-1;i>=0;--i)
        {
            ListNode* newNode = new ListNode(arr[i],head);
            head=newNode;
        }
        return head;
    }
};