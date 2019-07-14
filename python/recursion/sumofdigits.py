def sumofdigits(n):
    if n==0:
        return 0# NOTE:
    else:
        return n%10+sumofdigits(int(n/10))

x=sumofdigits(123456790)
print(x)
