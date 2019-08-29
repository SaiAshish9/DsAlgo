int count(struct node *p){
  int x,y;
  if(p!=NULL){
    x=count(p->left);
    y=count(p->right);
    if(p->left&&p->right)
    return x+y+1;
    else
    return x+y;
  }
  return 0;
}
