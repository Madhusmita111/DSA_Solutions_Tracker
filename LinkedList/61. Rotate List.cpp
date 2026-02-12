class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0)return head;
        ListNode* temp = head;
        int count = 1;
        while(temp->next){
            temp = temp->next;
            count++;
        }
        k=k%count;
        if(k==0)return head;
        temp->next = head;
        ListNode* tail = head;

        for(int i=0; i<count-k-1; i++){
            tail = tail->next;
        }
        ListNode* nhead = tail->next;
        tail->next = nullptr;
        
    
        return nhead;
    }
};

// TC = O(n)
// SC = O(1)
