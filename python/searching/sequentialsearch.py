# ordered sequential search
def seq(arr,x):
    pos=0
    found=False
    stopped=False
    while pos<len(arr) and not stopped and not found:
         if arr[pos]==x:
             found=True
         else:
             if arr[pos]>x:
                    stopped=True

             else:
                      pos+=1
    return f'{found}  position : {pos}'

print(seq([1,2,3,4],3))
