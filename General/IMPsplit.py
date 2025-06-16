

# Reversing only the word in the stirng 


S = "i.like.this.program.very.much"

s = S.split(".")
str = ""
s.reverse()
for i in range(len(s)):
    if(i<len(s)-1):
        str+=(s[i]+".")
    else:
        str+=(s[i])







