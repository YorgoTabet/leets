#include <iostream>;
#include <vector>;

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* current = node;
        ListNode* prev = nullptr;
        
        while(current->next != nullptr){
            current->val = current->next->val;
            prev = current;
            current = current->next;
        }
        
        prev->next = nullptr;
    }
};