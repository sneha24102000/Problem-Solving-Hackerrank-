bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    
    if (head1 == NULL && head2 == NULL) {   
    return 1;
} else if (head1 == NULL || head2 == NULL) {
    return 0;
}
return (head1->data == head2->data) && 
compare_lists(head1->next, head2->next);
} 
