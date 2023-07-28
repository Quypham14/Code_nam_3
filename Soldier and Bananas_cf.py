a,b,c=[int(x) for x in input().split()]
sum=0
for i in range(1,c+1):
    sum+=a*i
if sum<b:
    print(0)
else:
    print(sum-b)