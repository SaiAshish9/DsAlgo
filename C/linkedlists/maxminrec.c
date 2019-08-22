#define MIN_INT -32768
int max(struct node *p)
{int x=0;
  if(!p)
  return MIN_INT;
  else{

  return max(p->data)>p->data?x:p->data;
}}
