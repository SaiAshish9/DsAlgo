struct node *p=root;
int i=0,A[20];
while(p!=NULL)
{
  A[i]=p->data;
  p=p->data;
  i++;
}
p=root,i--;
while(!p){
  p->data=A[i--];
  p=p->next;
}

void rev(struct node *p){
struct node *q=p->link;
   if(!q)
   {rev(q,q->link);
q->link=p;
}else
   root=q;
}
