SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* n = llist;

    while (n->next != nullptr) {
        if (n->data == n->next->data) {
            SinglyLinkedListNode* xoa = n->next;
            n->next = n->next->next;
            delete xoa;
        } else {
            n = n->next;
        }
    }

    return llist;
}