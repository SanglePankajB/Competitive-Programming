dic = {}

dic[1] = [2,3,4]
dic[2] = [1,3]
dic[3] = [2,4]
dic[4] = [1,3]

print(dic)
print(dic[2])

dic[2].append(2)            # For Adding nodes

print(dic[2])


"""
1----------2
|  _       | 
|     _    |
4----------3
"""