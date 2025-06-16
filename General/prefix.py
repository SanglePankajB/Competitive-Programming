# Longest common prefix in an array of string 

# arr = ["geek", "geeks", "geekforgeek"]

def longestCommonPrefix(self, arr, n):
        
        str = ""                # To store common prefix
        slst =[]                # List to store len of strings in array
        for i in arr:
            slst.append(len(i))
        slst.sort()             # sorted so to get smallest len at 0th index
        
        smallest = slst[0]
        i =0
        while(i<smallest):      # prefix len cant be greater than smallest string
            ch = arr[0][i]      
            for j in range(0,n):
                if(arr[j][i] != ch):
                    if(str==""):
                        return -1
                    return str          
                elif(j==n-1):    # after traversing all strings from array and if it is common then adding it in str
                    str+=ch
            i+=1
            
        return str