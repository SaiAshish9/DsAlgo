def binary(arr,x):
    found=False
    f=0
    l=len(arr)-1

    while f<=l and not found:
        mid=(f+l)//2
        if arr[mid]==x:
               found=True
        else:
            if x<arr[mid]:
                     l=mid-1
            else:
                      f=mid+1
    return found

arr1=sorted([2,1,1,0,5])
print(binary(arr1,2))
