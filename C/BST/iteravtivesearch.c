void search(struct node*t,int key){
while(t!=NULL)
{  if(key==t->data)
  return t;
  else if(key<t->data)
  t=t->left;
  else
  t=t->right;
}
return NULL;
}
