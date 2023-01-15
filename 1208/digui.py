def digui(n):
    if n ==1:
        return n
    else:
        return digui(n-1)*n
# print(digui(6))


def febi(m):
    if  m==1 or m ==2:
        return 1
    else:
        return febi(m-1) + febi(m-2)

for i in range(1,10):
    print(febi(i))