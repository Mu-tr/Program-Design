#在这里设计Dice类
class Dice:
    iSides=6
    a=[]
    cnt=0
    def rollDice(self):
        d=random.randint(1,self.iSides)
        self.a.append(d)
        self.cnt+=1
        return d
    def sideCount(self,x):
        return self.a.count(x)
    def rollCount(self):
        return self.cnt

import random
random.seed(0)   #设置随机数种子，以便让执行结果固定
d = Dice()
print("-----Roll dice for 100 times-----")
for x in range(100):
    r = d.rollDice()
    if x < 10:
        print(r,end=",") 
print("...")

print("-----Statistics of rolling the dice-----")
for i in range(1,d.iSides+1):
    sideCount = d.sideCount(i)
    rollCount = d.rollCount()
    print(f"Side {i}: {sideCount}/{rollCount} = "\
        f"{sideCount*100/rollCount:.1f}%")