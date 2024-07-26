import math

camichael = [0,0]

def especial(n):
    for a in range (2,n):
        if ((a**n)%n) != a:
            camichael.append(0)
            return
    camichael.append(1)
    return

def primos():
    for i in range(2,65000):
        p = True
        for j in range(2 ,round(math.sqrt(i)+1)):
            if i % j == 0:
                p = False
                break
        if(not p):
            especial(i)
        else:
            camichael.append(0)
    return

primos()

while(True):
    n = int(input())
    if n == 0:
        break
    if camichael[n] == 0:
        print(f"{n} is normal.")
    else:
        print(f"The number {n} is a Carmichael number.")