void removeSorted(){
struct  node *p=root,*q=root->next;
while(!q){
if(p->data!=q->data){
  p=q;
  q=q->next;
}
else{
  p->next=q->next;
q=p->next;

}}
}
