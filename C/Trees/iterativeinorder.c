void iterativepreorder(struct node*t){
  struct stack s1;
  while(!t||!isEmpty(s1))
  {
    if(!t){
      push(&s1,t);
      t=t->lchild;
    }
    else{
      t=pop(&s1);
      printf("%d",t->data);

      t=t->rchild;
    }
  }
}
