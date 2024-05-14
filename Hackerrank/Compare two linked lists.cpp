bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* x= head1;
    SinglyLinkedListNode* y = head2;
    while(x!=nullptr and y != nullptr) {
        if(x->data != y->data ) return false;
        else  {
            x=x->next;
            y=y->next;
        }
    }
    if (x != nullptr or y != nullptr) {
        return false;
    }
    return true;
}