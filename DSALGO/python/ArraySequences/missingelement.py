# def finder(arr1,arr2):
#     arr1.sort()
#     arr2.sort()
#
#     for num1,num2 in zip(arr1,arr2):
#         if(num1!=num2):
#             return num1
#
#         return arr1[-1]
#
# print(finder([1,2,3,4],[1,2,3]))
# import collections
def finder(arr1,arr2):
    d= collections.defaultdict(int)

    for num in arr2:
        d[num]+=1

    for num in arr1:
        if d[num]==0:
            return num
        else:
            d[num]-=1
            return False

print(finder([5,7,7,8],[5,7,7]))

# def finder(arr1,arr2):
#     result=0
#    for num in arr1:
#
#
#         for num in arr1+arr2:
#             result^=num
#             print(result)
#
#     return result
# print(finder([5,7,7,8],[5,7,7]))
