
while True:
    try:      
        t,a,b = input().split(" ")
        t = int(t)
        a = int(a)
        b = int(b)
        x = (t**a - 1)
        y = (t**b - 1)
    
    except:
        break

    if t == 1:
        p = "({}^{}-1)/({}^{}-1) is not an integer with less than 100 digits.".format(t,a,t,b)
        print(p)
    else:
        res = x//y

        if (t**a - 1)%(t**b - 1) == 0:
            val = True
        else:
            val = False
            
        txt = str(res)
        if len(txt) < 100 and val == True:
            p = "({}^{}-1)/({}^{}-1) {}".format(t,a,t,b,txt)
            print(p)
        else:
            p = "({}^{}-1)/({}^{}-1) is not an integer with less than 100 digits.".format(t,a,t,b)
            print(p)