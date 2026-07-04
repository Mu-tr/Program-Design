def isPass(score,n=60):
    if score>=n:
        return "passed"
    else:
        return "failed"

stuA=80    #百分制得分80
print(isPass(stuA))
stuB=120  #150分制得分120
print(isPass(stuB,90))