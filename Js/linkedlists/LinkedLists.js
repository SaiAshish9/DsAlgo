// let linkedlist={
//   head:{
//     value:10,
//     next:{
//       value:5,
//       next:{
//         value:16,
//         next:null
//       }
//     }
//   }
//
// }
class Node{
  constructor(value)
  {  this.value=value,
    this.next=null }

};
class linkedlist{
  constructor(value){
    this.head={
      value:value,
      next:null
    }
    this.tail=this.head
    this.length=1
  }
  append(value){
    const newNode = new Node(value)

this.tail.next=newNode
this.tail=newNode
this.length++
return this
  }

  prepend(value){
    const newNode = new Node(value)
    newNode.next=this.head
    this.head=newNode
    this.length++
    return this
  }
  print(){
const arr=[]
let current=this.head
while (current!=null){
  arr.push(current.value)
  current=current.next
}
return arr
  }
  insert(i,val){
if(i>=this.length){
  return this.append(val)
}
const newNode=new Node(val)
const leader=this.traverseToIndex(i-1)
const holdingPointer=leader.next
leader.next=newNode
newNode.next=holdingPointer
this.length++
return this.print()
  }

  traverseToIndex(index){
    let x=0;
    let current=this.head;
    while(x!==index){
      current=current.next;
      x++
    }
    return current
  }
  remove(index){
    const leader=this.traverseToIndex(index-1)
    const unwanted=leader.next
    leader.next=unwanted.next
    this.length--
    return this.print()
  }
}

const list=new linkedlist(10)
list.append(5)
list.append(16)
list.prepend(1)
list.insert(2,9)
list.remove(4)
console.log(list.print());
console.log(list);
