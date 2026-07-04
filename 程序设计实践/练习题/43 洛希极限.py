a,b,c=input().split()
t1=float(a)
t3=float(c)
if b=='0':
    t1*=2.455
else:
    t1*=1.26
print(f"{t1:.2f} {'^_^' if t3>=t1 else 'T_T'}")