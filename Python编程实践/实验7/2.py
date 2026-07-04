a=100.0
b=100.0
t1=1.002
t2=1.001
t3=0.999
n=int(input())
for i in range(n):
    b*=t2
    a=a*t1 if i%5<=2 else a*t3
print(f"{b:.5f},{a:.5f}")