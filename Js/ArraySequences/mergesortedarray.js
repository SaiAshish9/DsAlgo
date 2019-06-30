function merge(a1,a2){
const a3=[];
let a1Item=a1[0]
let a2Item=a2[0]
let i=1;
let j=1;
if(a1.length===0)
{return a2;}
if(a2.length===0)
{return a1;}
while(a1Item||a2Item){
  if(!a2Item||a1Item<a2Item){
    a3.push(a1Item)
    a1Item=a1[i];
    i++
  }
  else{
    a3.push(a2Item)
    a2Item=a2[j];
    j++
  }
}
return a3;
}
console.log((merge([0,3,4],[2,4,7])))
