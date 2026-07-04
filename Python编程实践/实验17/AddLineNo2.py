with open("实验17\AddLineNo.py","rt") as f:        #1
    lines=f.readlines()                           #2
#20252764 杨淮楠                                                  #3
maxLength=len(max(lines,key=len))                 #4
                                                  #5
newLines=[line.rstrip().ljust(maxLength)+\        #6
"#"+str(r+1)+"\n" for r,line in enumerate(lines)] #7
                                                  #8
with open("实验17\AddLineNo2.py","wt") as f:       #9
    f.writelines(newLines)                        #10
