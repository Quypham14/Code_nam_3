n=int(input())
a=[]
a=[int (x) for x in input().split()]
a.sort()
for i in range(n):
    print(a[i],end=" ")