
Node *head=new Node(5,2);
insert(head,14,1);
insert(head,2,3);
Node *head2 = new Node(6,2);
insert(head2,4,1);
insert(head2,1,3);
printList(head);
cout<<endl;
printList(head2);
cout<<endl<<"Addition:"<<endl;
addPolynomials(head,head2);
