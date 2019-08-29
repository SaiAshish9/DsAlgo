void iterativepreorder(struct node*t){
  struct stack s1;
  while(!t||!isEmpty(s1))
  {
    if(!t){
      printf("%d",t->data);
      push(&s1,t);
      t=t->lchild;
    }
    else{
      t=pop(&s1);
      t=t->rchild;
    }
  }
}
