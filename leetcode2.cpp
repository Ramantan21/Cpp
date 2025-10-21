#include <list>
#include <iostream>

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
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

// class Solution
// {
// public:
//     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//     {

//     }
// };

int main(){
    ListNode* node = new ListNode(5);
    node->next = new ListNode(4);
    node->next->next = new ListNode(3);

    ListNode* node2 = new ListNode(2);
    node2->next = new ListNode(3);
    node2->next->next = new ListNode(4);

    ListNode* curr = node;
    while(curr != nullptr){
        std::cout<<curr->val<<std::endl;
        curr = curr->next;
    }

    ListNode* curr2 = node2;
    while(curr2 != nullptr){
        std::cout<<curr2->val<<std::endl;
        curr2 = curr2->next;
    }
    ListNode* result =  new ListNode(node->val + node2->val);
    std::cout << "result->" << result->val << std::endl;



    return 0;

}