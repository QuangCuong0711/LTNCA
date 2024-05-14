DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* r = nullptr;
    DoublyLinkedListNode* a = llist;
    DoublyLinkedListNode* n = nullptr;
    
    while (a != nullptr) {
        n = a->next; 
        a->next = r; 

        r = a;
        a = n;
    }
    return r;
}