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
    int getDecimalValue(ListNode* head) {
        int result = 0;
        stack<int> binary;
        ListNode *temp = head;
        while(temp!=NULL)
        {
            binary.push(temp->val);
            temp = temp->next;
        }
        for(int i=0;;i++)
        {
            if(binary.empty())
            {
                break;
            }
            result+=pow(2,i)*binary.top();
            binary.pop();
        }
        // int bina = stoi(binary);
        // cout<<bina<<endl;
        // int result=0;
        // int i=0;
        // while(bina)
        // {
        //     int lastDigit = bina%10;
        //     result+=lastDigit*pow(2,i);
        //     i++;
        //     bina= bina/10;
        // }
        return result;
    }
};