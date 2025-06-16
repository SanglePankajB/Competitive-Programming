

# Check if the word is right rotating word


from collections import deque

w = "pankaj"
wa = "ajpank"

lst = deque()
for i in w:
    lst.append(i)
print("This is lst: ", lst)
lst1 = deque()
for i in wa:
    lst1.append(i)
print("This is lst1: ", lst1)

flag = False
for i in range(len(w)-1, 0, -1):
    lst.appendleft(w[i])
    lst.pop()
    if(lst == lst1):
        flag = True
        break

if(flag):
    print("Yes")
else:
    print("NO")


# if(lst == lst1):
#     print("yes")
# else:
#     print("No")