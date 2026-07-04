a = [1,2,3,4,5,6,7]
b = a
c = a[:]
a[3:4] = 99,100
print("a=",a,id(a)==id(b))
print("b=",b)
print("c=",c,id(c)==id(a))