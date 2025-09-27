st="([])"
flag=True
stack =[]
pairs={"}":"{","]":"[",")":"("}
for i in st:
    if i in "[{(":
        stack.append(i)
    elif i in "}])":
        if not stack or stack[-1]!=pairs[i]:
            flag= False
            break
        stack.pop()
if flag==True:
    print("True")
else:
    print(false)
