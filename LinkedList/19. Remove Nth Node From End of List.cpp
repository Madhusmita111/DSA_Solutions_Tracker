class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp){
            temp = temp->next;
            count++;
        }
        if(count == n){
            return head->next;
        }
        temp = head;
        int s = count - n;
        for(int i=0; i<s-1; i++){
            temp = temp->next;
        }

        temp->next = temp->next->next;
        return head;
    }
};
