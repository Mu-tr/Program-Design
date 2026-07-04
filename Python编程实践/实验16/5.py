def getdata( ):
    """从文件读取应聘者信息"""
    s = []
    while True:
        line = input()
        if not line:
            break 
        s.append(line.split())
    return s

#在此处定义两个函数
def classify(listT):
    A,B,C,D=[],[],[],[]
    for i in listT:
        a,b,c=i
        if int(b)>=60 and int(c)>=60:
            if int(b)>=80 and int(c)>=80:
                A.append([a,b,c])
            elif int(b)>=80:
                B.append([a,b,c])
            elif int(b)>=int(c):
                C.append([a,b,c])
            else:
                D.append([a,b,c])
    return A,B,C,D


def admissionSort(a,b,c,d):
    A=sorted(a,key=lambda x : (-(int(x[1])+int(x[2])),-int(x[1]),int(x[0])))
    B=sorted(b,key=lambda x : (-(int(x[1])+int(x[2])),-int(x[1]),int(x[0])))
    C=sorted(c,key=lambda x : (-(int(x[1])+int(x[2])),-int(x[1]),int(x[0])))
    D=sorted(d,key=lambda x : (-(int(x[1])+int(x[2])),-int(x[1]),int(x[0])))
    return A+B+C+D

def myPrintL(listA):
    """输出录取人数和按录取顺序排列的应聘者名单"""
    print("上线人数",len(listA))
    for j in listA:
        print(" ".join(j))

def main():
    listA = getdata()#获取原始数据
    a, b, c, d = classify(listA)
    admissionList=admissionSort( a, b, c, d)#生成录取顺序名单
    myPrintL(admissionList)

main()