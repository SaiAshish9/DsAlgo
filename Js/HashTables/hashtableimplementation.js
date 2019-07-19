class HashTable{
  constructor(size){
    this.data=new Array(size);
  }
_hash(key){
  let hash=0;
  for(let i=0;i<key.length;i++){
    hash=(hash+key.charCodeAt(i)*i)%this.data.length

  }
  return hash;
}

set(key,value){
  let address=this._hash(key)
  if(!this.data[address]){
    this.data[address]=[]
    this.data[address].push([key,value])
    console.log(this.data);
  }
}
get(key){
  let address=this._hash(key);
  const currentBucket=this.data[address]
  console.log(currentBucket)

if(currentBucket){
for(let i=0;i<currentBucket.length;i++){
  if(currentBucket[i][0]==key){
    return currentBucket[i][1]
  }
}
}
return undefined
}
keys(){
  const keyArray=[]
  for(let i=0;i<this.data.length;i++){
    if(this.data[i]){
      // console.log(this.data[i]);
      keyArray.push(this.data[i][0][0])
    }
  }
return keyArray;
}
}
const myHash=new HashTable(50)
console.log(myHash._hash('grapes'));
myHash.set('grapes',10000)
myHash.get('grapes')
myHash.keys();
console.log(myHash.keys());
