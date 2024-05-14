SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode* n = new SinglyLinkedListNode(data);
    if (position == 0) {
        n->next = llist;
        return n;
    }
    SinglyLinkedListNode* a = llist;
    for (int i = 0; i < position - 1 && a != nullptr; i++) {
        a = a->next;
    }
    if (a == nullptr) {
        
        delete n; 
        return llist;   
    }
    SinglyLinkedListNode* nextNode = a->next;
    a->next = n;
    n->next = nextNode;
    return llist;
    
}