void createpre(int pre[],int n){
  Stack stk;
  struct node* t;
  int i=0;
  root->data=pre[i++];
  root->left=root->right=NULL;
  p=root;
  while(i<n){
    if(pre[i]<p->data){
temp->data=pre[i++];
t->left=t->right=NULL;
p->lchild=temp;
push(&stk,p);
p=t;

    }
else{
  if(pre[i]>p->data&&pre[i]<top(stk)->data){

temp->data=[i++];
temp->left=temp->right=NULL;
p->right=t;
p=t;

}else{
  p=pop(&stk);
}
}


  }


}
