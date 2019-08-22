struct node *p,*q;
p=q=root;
while(q){
  q=q->link;
  if(q)
  q=q->next;
  if(q)
  p=p->next;
}
//using stack
