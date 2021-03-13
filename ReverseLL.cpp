SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    
    SinglyLinkedListNode*node=head;
    if( head->next)
    {
        node=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
    }
    return node;
    
    
    
    
 

}