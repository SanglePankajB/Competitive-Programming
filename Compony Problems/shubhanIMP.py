
n = 25143
k = 11

a = str(n)

k = k % len(a)

a+=a

ans = ""

for i in range(len(a)//2):
    ans+=a[i+k]

print(int(ans))
