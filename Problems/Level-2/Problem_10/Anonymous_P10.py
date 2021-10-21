
#print("Begin")
str=input()
LB=str[0:2].upper()
UB=str[-2:0].upper()
#if((str[-2:0].upper())<="C8"):
    #print("Piano")
    #if(((str[0:2].upper())>="D4") && ((str[-2:0].upper())<="C7")):
        #print("Piccolo")
if((LB>="A0")and(UB<="C8")) :
    print("Piano")
    if((LB>="D1") and (UB<="F4")):
        print("Tuba")
        if((LB>="D4") and (UB<="C7")):
            print("Piccolo")
            if((LB>="E3") and (UB<="E6")):
                print("Guitar")
                if((LB>="G3") and (UB<="A7")):
                    print("Violin")

# ARR Anonymous

