def sum(arr,k):
    if len(arr)<2:
        return
    seen=set()
    output=set()
    for num in arr:
        target=k-num

        if target not in seen:
            seen.add(num)
        else:
            output.add((min(num,target),max(num,target)))
   return '\n'.join(map(str,list(output)))

   print(sum([1,3,2,2,1,3],4))
