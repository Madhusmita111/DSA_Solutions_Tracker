class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        if(!head || !head->next)return head;

        ListNode* l1 = new ListNode(0);
        ListNode* l2 = new ListNode(0);
        ListNode* f = l1;
        ListNode* s = l2;
        ListNode* temp = head;

        while(temp){
            if(temp->val >= x){
                f->next = temp;
                f = f->next;
            }else{
                s->next = temp;
                s = s->next;
            }
            temp = temp->next;
        }
        f->next = nullptr;
        s->next = l1->next;
        // f-> next = head;
        return l2->next;
    }
};
