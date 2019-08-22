void check(){
  int x=-32768;
struct node* p=root;
while(p){
  if(p->data<x)
  return false;
  x=p->data;
  p=p->link;
}
return x;
}
