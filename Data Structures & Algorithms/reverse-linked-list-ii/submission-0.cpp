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
private: 
    ListNode * reverseList(ListNode * h){
        ListNode * p = nullptr , * c = h , * n = nullptr;
        while(c != nullptr){
            n = c -> next;
            c -> next = p ;
            p = c ;
            c = n ;
        }
        return p;
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode * dy = new ListNode(-1);
        dy->next = head;
        ListNode * t1 = dy , * t2 = dy ;
        for(auto i = 0 ; i < left -1 ; ++i) t1 = t1->next;
        for(auto i = 0 ; i < right ; ++i) t2 = t2->next;
        ListNode * temp = t1->next;
        ListNode * s = t2->next;
        t1->next = nullptr;
        t2->next = nullptr;
        temp = reverseList(temp);
        t1->next = temp ;
        while(temp ->next != nullptr) temp = temp->next;
        temp->next = s;
        return dy->next;
    }
};