def rec_coin(target,coins,known):
    min=target
    if target in coins:
        return 1

    elif known[target]>0:
        return known[target]
    else:
        for i in [c for c in coins if c<=target]:
            num=1+rec_coin(target-i,coins,known)
            if num<min:
                min=num
                known[target]=min
    return min
print(rec_coin(15,[1,2,5],[0]*16))
# dynamicprogramming
# memoization
