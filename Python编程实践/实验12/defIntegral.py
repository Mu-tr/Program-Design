#20252764 杨淮楠
import definite
def f1(x):
    return x+1

def f2(x):
    return 1.0/(1.0+4.0*x*x)
print("%.2f" % definite.connect(f1,0,2,100))
print("%.2f" % definite.connect(f2,-1,1,100))