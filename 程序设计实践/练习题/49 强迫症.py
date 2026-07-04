s=input()
if len(s)==4:
    d=int(s[0])*10+int(s[1])
    if d<22:
        print(f"20{s[0]}{s[1]}-{s[2]}{s[3]}")
    else:
        print(f"19{s[0]}{s[1]}-{s[2]}{s[3]}")
else:
    print(f"{s[0]}{s[1]}{s[2]}{s[3]}-{s[4]}{s[5]}")