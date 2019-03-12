n,m=input().split()
n,m=int(n),int(m)
a=list(map(int,input().split()))
b=list(map(int,input().split()))
f=0
for x in b:
    if(x in a):
        f+=1
        continue
if(f==len(b)):
    print("YES")
else:
    print("NO")
