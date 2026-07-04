n=int(input())
for i in range(n):
    a,b,c=map(int,input().split())
    if a==0:
        if b>129:
            print("ni li hai!",end=' ')
        elif b<129:
            print("duo chi yu!",end=' ')
        else:
            print("wan mei!",end=' ')
        if c>25:
            print("shao chi rou!")
        elif c<25:
            print("duo chi rou!")
        else:
            print("wan mei!")
    else:
        if b>130:
            print("ni li hai!",end=' ')
        elif b<130:
            print("duo chi yu!",end=' ')
        else:
            print("wan mei!",end=' ')
        if c>27:
            print("shao chi rou!")
        elif c<27:
            print("duo chi rou!")
        else:
            print("wan mei!")