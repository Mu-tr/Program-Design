m=int(input())
n=int(input())
k=(m*8-6*n)/(m-n)
a=m*8-m*k
b=a/(10-k)
print(f"原有排队游客份数:{a:.1f}, 每分钟新到游客份数:{k:.1f}, 10口同开需{b:.1f}分钟清零待检票游客.")