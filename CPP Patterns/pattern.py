n = int(input("enter the no of stars :\n"))
for i in range (n) :
    for j in range (n-i):
        print("*",end="")
    print()