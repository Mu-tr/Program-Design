n,m=map(int,input().split())
for i in range(n):
    a=float(input())
    if a<m:
        print(f"On Sale! {a:.1f}")