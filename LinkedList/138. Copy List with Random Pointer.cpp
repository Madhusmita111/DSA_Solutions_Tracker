class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr = head;

        // we are creating the clone of the all nodes
        while(curr!=nullptr){
            Node* dummy = new Node(curr->val);
            dummy->next = curr->next;
            curr->next = dummy;
            curr = dummy->next;
        }
        // now we have to set the random pointers of the clone nodes
        curr = head;
        while(curr != nullptr){
            if(curr->random != nullptr){
                curr->next->random  = curr->random->next;
            }
            curr = curr->next->next;
        }
        Node* dummy = new Node(0);
        Node* tail = dummy;
        curr = head;
        while(curr!=nullptr){
            Node* copyNode = curr->next;
            curr->next = copyNode->next;

            tail->next = copyNode;
            tail = tail->next;

            curr = curr->next;
        }

        return dummy->next;
    }
};
