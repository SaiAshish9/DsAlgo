void iterativepreorder(struct node*t){
  struct stack s1;
  long int temp;
  while(!t||!isEmpty(s1))
  {
    if(!t){
      push(&s1,t);
      t=t->lchild;
    }
    else{
      temp=pop(&s1);
if(temp>0)
{push(&s1,-temp);

      t=((node*)temp)->rchild;
}
else{
  printf("%d",((node*) temp)->data);
  t=NULL;
} }
  }
}
