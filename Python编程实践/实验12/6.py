
def deposit(n):
    sum=0
    a=0.01
    for i in range(n):
        sum+=a
        a*=2.0
    return sum

def withdraw(n,amount):
    return n*amount

days,amount=eval(input())
diff=deposit(days)-withdraw(days,amount)
if diff>0:
    print("富翁亏损: {:.2f}".format(diff))
else:
    print("富翁赢利: {:.2f}".format(0-diff))