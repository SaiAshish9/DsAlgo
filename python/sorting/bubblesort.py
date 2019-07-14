def bubble(arr):
    for n in range(len(arr)-1,0,-1):
        for k in range(n):
            if arr[k]>arr[k+1]:
                t=arr[k]
                arr[k]=arr[k+1]
                arr[k+1]= t
    return arr
print (bubble([3,1,2,9,7,8]))
def bubble1(arr):
    for n in range(len(arr)):
        for k in range(len(arr)-n-1):
            if arr[k]>arr[k+1]:
                t=arr[k]
                arr[k]=arr[k+1]
                arr[k+1]= t
    return arr
print(bubble1([3,1,2,9,7,8]))
