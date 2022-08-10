#include <iostream>;

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* current = head->next;
        ListNode* prev = head;
        ListNode* next = current->next;
        
        
        while(current != nullptr){
            if(prev->next == current){
                prev->next = nullptr;
            }
            current->next = prev;
            prev = current;
            if(next == nullptr){
                return current;
            }else{
            current = next;
            if(current != nullptr){
             next = current->next;   
            }
            }
        }
    
        return current;
    }
};