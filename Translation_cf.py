a=str(input())
b=str(input())
c=''.join(reversed(a))
n=min(len(b),len(a))
check=0
for i in range(0,n):
    if c[i]!=b[i]:
        check=1
if check==0:
    print("YES")
else:
    print("NO")

