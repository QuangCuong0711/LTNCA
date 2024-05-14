SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
   
    SinglyLinkedListNode* n= new SinglyLinkedListNode(data) ;
    
    n->next=nullptr;
    if(head==nullptr) {
        return n;
    }
    SinglyLinkedListNode* t = head;
    while(t->next!=nullptr){
    t = t->next;
    }
    t->next= n;
    return head;
}