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

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0; // use it if the value of the node >=10
        ListNode *dummy = new ListNode(0); //dummy linked list filled with 0
        ListNode *current = dummy;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int val1 = (l1 != nullptr) ? l1->val : 0; //check if l1 is null 
            int val2 = (l2 != nullptr) ? l2->val : 0; // check if l2 is null
            int sum = val1 + val2 + carry;
            current->next = new ListNode(sum % 10);
            carry = sum / 10;
            current = current->next; //link the list
            if(l1!= nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }
        return dummy->next;
    }
};

int main(){
    ListNode* node = new ListNode(5);
    node->next = new ListNode(4);
    node->next->next = new ListNode(3);

    ListNode* node2 = new ListNode(2);
    node2->next = new ListNode(3);
    node2->next->next = new ListNode(4);

    Solution sol;

    ListNode* result = sol.addTwoNumbers(node,node2);

    ListNode* current = result;
    while(current != nullptr){
        std::cout<<current->val << std::endl;
        current = current->next;
    }

    // ListNode* curr = node;
    // while(curr != nullptr){
    //     std::cout<<curr->val<<std::endl;
    //     curr = curr->next;
    // }

    // ListNode* curr2 = node2;
    // while(curr2 != nullptr){
    //     std::cout<<curr2->val<<std::endl;
    //     curr2 = curr2->next;
    // }
    // ListNode* result =  new ListNode(node->val + node2->val);
    // std::cout << "result->" << result->val << std::endl;




    return 0;

}