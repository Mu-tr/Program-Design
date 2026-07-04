v1 = [x for x in range(-5,+10,2)]
v2 = "".join([chr(ord('a')+x) for x in range(26)])
print("v1:",v1)    #期望输出: v1: [-5, -3, -1, 1, 3, 5, 7, 9]
print("v2:",v2)    #期望输出:v2: abcdefghijklmnopqrstuvwxyz
print(v1[0:5])       #期望输出:[-5, -3, -1, 1, 3]
print(v1[-6:-1])    #期望输出:[-1, 1, 3, 5, 7]
print(v1[-1:-6:-2])      #期望输出:[9, 5, 1]
print(v2[:])       #期望输出:abcdefghijklmnopqrstuvwxyz 
print(v2[::-5])     #期望输出:zupkfa
print(v2[::-1])     #期望输出:zyxwvutsrqponmlkjihgfedcba
print(v2[:-5:7])   #期望输出:aho