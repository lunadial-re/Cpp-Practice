class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size =1;
        ListNode* temp = head;
        while (temp->next!=nullptr)
        {
            size+=1;
            temp=temp->next;
        }

        int middleElem=0;
        if (size%2==0) middleElem=size/2 + size%2+1;
        else middleElem = size/2 + size%2;
        int counter =1;
        while(counter!=middleElem) {
            head=head->next;
            counter++;
        }
        return head;
    }
};
