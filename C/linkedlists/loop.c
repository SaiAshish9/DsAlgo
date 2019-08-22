int isloop(struct node*f){
  struct node *p,*q;
  p=q=f;
  do{
p=p->link;
q=q->link;
if(!q)
q=!q?q->link:NULL;
  }
  while(p&&q);
  if(p==q)
  return 1;
  else
  return 0;
}
