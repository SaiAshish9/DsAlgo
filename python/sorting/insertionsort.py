def insertion(arr):
    for n in range(1,len(arr)):
        current=arr[n]
        position=n
        while position>0 and arr[position-1]>current:
            arr[position]=arr[position-1]
            position-=1
        arr[position]=current
    return arr
print (insertion([3,1,2,9,7,8]))
