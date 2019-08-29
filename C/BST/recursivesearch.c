void rsearch(struct node*t,int key){

  if(t==NULL)
  return NULL;
  if(key==t->data)
  return t;
  else if(key<t-data)
  rsearch(t->lchiid,key);
  else
  return rsearch(t->rchild,key);
}
