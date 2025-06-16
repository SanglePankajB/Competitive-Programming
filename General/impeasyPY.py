

# Converting integer into binary string and then checking whether it is palindrom or not

n = 8

# b = bin(7)    bin fun will convert into binary but in the form 0b111 so we have to run loop from index 2

# pal(n)

def pal(n)->bool:

    b = bin(n)                      # very imp step 
    for i in range(2, len(b)):
        if(b[i]!=b[len(b)-1-i+2]):      # we want the last element
            return False
    return True

print(pal(7))

lst = [3,5,6,7,1]
lst.sort()
print(lst)
