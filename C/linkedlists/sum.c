int add(struct node *p){
  if(p)
  return add(p->next)+p->data;
  else
  return 0;
}
