function firstRecurring(x){
for(let i=0;i<x.length;i++){
for(let j=i+1;j<x.length;j++){
  if(x[i]===x[j]){
    return x[i]
  }
}
}
return undefined
}


console.log(firstRecurring([2,5,1,2,3,5,1,2,4]));
