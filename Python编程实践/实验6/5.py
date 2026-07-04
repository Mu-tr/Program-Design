x,y = map(float,eval(input()))
if(x>0 and y>0):
    print("第1象限")
elif(x<0 and y>0):
    print("第2象限")
elif(x<0 and y<0):
    print("第3象限")
else:
    print("第4象限")