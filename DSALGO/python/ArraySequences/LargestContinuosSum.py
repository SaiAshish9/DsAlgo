def result(arr):
    if len(arr)==0:
        return 0
    max_sum=current=arr[0]

    for n in arr[1:]:
        current=max(current+n,n)
        max_sum=max(current,max_sum)
    return max_sum;

ans=result([1,2,-1,3,4,10,10,-10,-1])

print(ans)
