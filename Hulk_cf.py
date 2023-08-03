n=int(input())
s="I hate that "
if n==1:
    print("I hate it")
else:
    i=2
    while i<n:
        if i%2==0:
            s+="I love that "
        else:
            s+="I hate that "
        i+=1
    if n%2==0:
        s+="I love "
    else:
        s+="I hate "
    print(s+"it")