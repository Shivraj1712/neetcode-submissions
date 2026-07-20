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
    ListNode* reverseList(ListNode * head){
        ListNode * prev = nullptr , * curr = head , * next = nullptr;
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr ;
            curr = next;
        }
        return prev;
    }
public:
    void reorderList(ListNode* head) {
        ListNode * slow = head , * fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode * first = head , * second = slow->next;
        slow->next = nullptr;
        second = reverseList(second);
        bool firstOne = false;
        first = first->next;
        ListNode * temp = head;
        while(first && second){
            if(firstOne){
                temp->next = first;
                first = first->next; 
                firstOne = false;
            }else{
                temp->next = second ;
                second = second->next;
                firstOne = true;
            }
            temp = temp ->next;
        }
        temp->next = first ? first : second;
    }
};
