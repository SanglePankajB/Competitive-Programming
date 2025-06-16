n1 = int(input())
lst1 = []

for i in range(n1):
    a = int(input())
    lst1.append(a)

n2 = int(input())
lst2 = []
for i in range(n2):
    a = int(input())
    lst2.append(a)

n3 = int(input())
lst3 = []
for i in range(n3):
    a = int(input())
    lst3.append(a)

flag = False

for i in lst1:
    for j in lst2:
        if(i == j):
            for k in lst3:
                if(i == k):
                    flag = True
                    print(i,end=" ")


if(flag == False):
    print("No Elements")
        
