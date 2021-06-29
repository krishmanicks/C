// struct Node* SortedMerge(struct Node* head1, struct Node* head2)
// {
//     if(head1 == NULL) {return head2;}
//    if(head2 == NULL) {return head1;}
   
//    if(head1->data > head2->data)
//    {
//        struct Node *temp = head1;
//        head1 = head2;
//        head2 = temp;
//    }
//    struct Node *res = head1;
   
//    while(head1 != NULL && head2 != NULL)
//     {
//         struct Node *tmp = NULL;
//         while(head1 != NULL && head1->data <= head2->data)
//         {
//             tmp = head1;
//             head1 = head1->next;
//         }
//         tmp->next = head2;
        
//         struct Node *temp = head1;
//         head1 = head2;
//         head2 = temp;
//     }
//     return res;
// }