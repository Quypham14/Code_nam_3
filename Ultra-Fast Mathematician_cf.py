a=str(input())
b=str(input())
n=a.__len__()
for i in range(0, n):
    if a[i]==b[i]:
        print(0,end="")
    else:
        print(1,end="")
        
