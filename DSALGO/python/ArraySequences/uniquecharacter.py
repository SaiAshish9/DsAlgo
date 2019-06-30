def unique1(s):
    # return len(set(s))==len(s)
    chars=set()
    for x in s:
        if x in chars:
              return False
        else:
            chars.add(x)
    return True
print(unique1('abcdef'))
