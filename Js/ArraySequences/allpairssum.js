function allPairs(n) {

  console.log('Numbers:');
  n.forEach((n)=>{
    console.log(n);
  })
  console.log('Corresponding Sums:');
  n.forEach((n1)=>{
    n.forEach(n2=>console.log(n1+n2))
  })
}
allPairs([1,2,3,4])
//O(n+n^2)=O(n^2)
