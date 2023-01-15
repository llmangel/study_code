import math
def f(n):
    result = (1/(math.sqrt(5))*((((1+math.sqrt(5))/2)**n)-(((1-math.sqrt(5))/2)**n)))
    return result
print(int(f(0)))