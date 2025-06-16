# dic = {}

# dic[2] = 10
# dic[4] = 1
# print(dic)

# for i in dic:
#     print(dic[i])


# Python dic is very useful for mapping values of array
# e.g how many occurance are there of each ele in array, etc

def countOccurence(arr,n,k):       # find  n//k times occuring ele
        #Your code here
        st = set(arr)
        
        dic = {}
        for i in st:
            dic[i] = 0
        
        # for i in st:
        #     for j in arr:
        #         if(i == j):
        #             dic[i]+=1

        for i in arr:
            dic[i]+=1
            
        print(dic)
        # temp = 0
        
        # for i in dic:
        #     if(dic[i]>n//k):
        #         temp+=1
                
        # return temp


arr = [1,2,2,4,8,2,1]

countOccurence(arr,1,1)















