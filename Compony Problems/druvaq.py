
# Druva Question 3rd largest string from string array

lst = ["Panakj", "Bahsfdffd", "don", "man", "aaaa"]

# mx = "a"
# id = 0
# for i in range(3):
#     for j in range(len(lst)):
#         if(len(lst[j])>len(mx)):
#             mx = lst[j]
#             id = j

#     if(i == 2):
#         print(mx)
#     else:
#         lst.pop(id)
#         # print(lst)
#         mx = "a"

# solution 2

dic = {}
for i in lst:
    dic[i] = len(i)
print(dic)
print(dic.keys())


l = []
for i in lst:
    l.append(len(i))

l.sort()
print(l)

thirdLargestLen = (l[len(l)-3])     # 3rd largest

for i in dic:
    if(dic[i] == thirdLargestLen):
        print(i)
        



    
    
