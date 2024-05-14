SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
     SinglyLinkedListNode* r = nullptr;
    SinglyLinkedListNode* a = llist;
    SinglyLinkedListNode* n = nullptr;
    
    while (a != nullptr) {
        n = a->next; 
        a->next = r; 

        r = a;
        a = n;
    }
    return r;
}

