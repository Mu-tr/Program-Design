n=int(input())
for i in range(n):
    s=input()
    t1=t2=0
    for j in s[0:3:]:
        t1+=int(j)
    for j in s[3:6:]:
        t2+=int(j)
    if t1==t2:
        print("You are lucky!")
    else:
        print("Wish you good luck.")