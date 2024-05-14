SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
SinglyLinkedListNode* n = new SinglyLinkedListNode(0);
    SinglyLinkedListNode* a = n;

   
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data <= head2->data) {
            a->next = head1;
            head1 = head1->next;
        } else {
            a->next = head2;
            head2 = head2->next;
        }
        a = a->next;
    }

   
    if (head1 != nullptr) {
        a->next = head1;
    } else {
        a->next = head2;
    }

    
    SinglyLinkedListNode* r = n->next;
    return r;
}