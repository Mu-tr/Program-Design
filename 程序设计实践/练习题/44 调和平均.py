n=int(input())
a=map(float,input().split())
sum=0
for i in a:
    sum+=(1.0/i)
sum/=n
print(f"{1.0/sum:.2f}")