a=int(input())
if a%400==0:
    print("闰年")
elif a%4==0 and a%100!=0:
    print("闰年")
else:
    print("平年")