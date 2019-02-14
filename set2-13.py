n=input()
if(n>0):
    l=list(n)
    sum=0
    for i in l:
        sum+=(int(i)**2)
    print(sum)
else:
    print("Invalid input")
