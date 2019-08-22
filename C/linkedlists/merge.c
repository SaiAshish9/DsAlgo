if(first->data<second->data)
{third=last=first
first=first->link;
last->link=NULL;
}else
{third=last=second
second=second->link;
last->link=NULL;}
while(!first&&!second){
if(first->data<second->data)
{
  last->link=first;
  last=first;
  first=first->link;
last->link=NULL;

}else{
  last->link=second;
  last=second;
  second=second->link;
last->link=NULL;
}
if(!first)
last->link=first;
else
last->link=second;

}
