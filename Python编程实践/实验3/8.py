a,b,c,d=map(int,input().split())
t1=a*60+b
t2=c*60+d
t3=t2-t1
s1=t3//60
s2=t3%60
print(f"{s1}:{s2}")