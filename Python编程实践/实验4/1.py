v = list(eval(input()))
print("before:",v)

for x in v[::-1]:
    cnt = v.count(x)
    if cnt >= 2:
        for i in range(cnt-1):
            v.remove(x)

print("after:",v)