x,y=map(float,input().split())
z=x/(y*y)
print(f"{z:.1f}")
if z>25.0:
    print("PANG")
else:
    print("Hai Xing")