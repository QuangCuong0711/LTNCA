int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    
    SinglyLinkedListNode* n = llist;
    SinglyLinkedListNode* a = llist;

    for (int i = 0; i < positionFromTail; ++i) {
        a = a->next;
    }

    while (a->next != nullptr) {
        n = n->next;
        a = a->next;
    }

    return n->data;
}