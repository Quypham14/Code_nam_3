n = int(input())
a = []
b = []
c = []
u = []
check=1
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
if a[0]==0 and b[0]==0:
    print("Oh, my keyboard!")
else:
    a.remove(a[0])
    b.remove(b[0])
    a.sort()
    b.sort()
    p = a.__len__()-1
    q = b.__len__()-1
    i = 0
    j = 0
    while i <= p or j <= q:
        if j == q+1 or (i <= p and a[i] < b[j]):
            c.append(a[i])
            i += 1
        else:
            c.append(b[j])
            j += 1

    for i in range(len(c)-1):
        if c[i] != c[i+1]:
            u.append(c[i])
    u.append(c[len(c)-1])
    if len(u)<n:
        print("Oh, my keyboard!")
    else:
        for i in range(len(u)):
            if u[i]!=i+1:
                check=0
        if check==0:
            print("Oh, my keyboard!")
        else:
            print("I become the guy.")
