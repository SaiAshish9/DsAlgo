def bin(arr,x):
    if len(arr)==0:
        return False
    else:
        mid=len(arr)/2
        if arr[mid]==x:
            return True
        else:
            if x<arr[mid]:
                return bin(arr[:mid],x)
            else:
                return bin(arr[mid+1:],x)
arr1=sorted([2,1,1,0,5])
print(bin(arr1,2))
