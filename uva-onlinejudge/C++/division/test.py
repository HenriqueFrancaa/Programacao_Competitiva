

while EOFError != True:
    try:      
        t,a,b = input().split(" ")
        t = int(t)
        a = int(a)
        b = int(b)
        x = (t**a - 1)
        y = (t**b - 1)
    
    except:
        break
    
    p1 = "({}^{}-1)/({}^{}-1)".format(t,a,t,b)
    print(p1, end = " ") 

    if t == 1:
        print("is not an integer with less than 100 digits.")
         
    elif y == 0:
        print("is not an integer with less than 100 digits.")

    elif a == b:
        print(1)
    
    else:
        res = x//y

        if x%y == 0:
            val = True
        else:
            val = False

        txt = str(res)

        if(len(txt) < 100 and val == True):
            print(txt)
        else:
            print("is not an integer with less than 100 digits.")