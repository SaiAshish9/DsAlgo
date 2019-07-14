def selection(arr):
    for n in range(len(arr)):
        for k in range(n):
            if arr[k]>arr[n]:
                t=arr[n]
                arr[n]=arr[k]
                arr[k]= t
    return arr
print (selection([3,1,2,9,7,8]))
