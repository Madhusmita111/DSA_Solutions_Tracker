class Solution {
public:

    ListNode* mid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* reverse(ListNode* head){
        ListNode* previous = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;

        while(current!= nullptr){
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        // head = previous;
        return previous;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* midt = mid(head);
        ListNode* slow = reverse(midt);
        ListNode* p1 = head;
        ListNode* p2 = slow;
        
        while( p2 != nullptr){
            if(p1->val != p2->val){
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};
