n=input()
l=list(n)
sum=0
prev='0'
for i in l:
    if(i=='I'):
        sum+=1
        prev='I'
    if(i=='V'):
        if(prev=='I'):
            sum+=3
        else:
            sum+=5
        prev='V'
    if(i=='X'):
        if(prev=='I'):
            sum+=8
        else:
            sum+=10
        prev='X'
print(sum)