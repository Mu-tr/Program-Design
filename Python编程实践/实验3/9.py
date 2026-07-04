a=list(input().split())
b=list(input().split())
c=list(input().split())
d=list(input().split())
e=list(input().split())
s1=int(a[1])
s2=int(b[1])
s3=int(c[1])
s4=int(d[1])
s5=int(e[1])
if s1>=90:d1=4.0
else:d1=4.0*s1/90.0
if s2>=90:d2=4.0
else:d2=4.0*s2/90.0
if s3>=90:d3=4.0
else:d3=4.0*s3/90.0
if s4>=90:d4=4.0
else:d4=4.0*s4/90.0
if s5>=90:d5=4.0
else:d5=4.0*s5/90.0
t1=int(a[2])
t2=int(b[2])
t3=int(c[2])
t4=int(d[2])
t5=int(e[2])
sum=t1+t2+t3+t4+t5
gpa=(d1*t1+d2*t2+d3*t3+d4*t4+d5*t5)/sum
print(f"GPA:{gpa:.2f}")