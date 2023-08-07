p = str(input())
n = p.__len__()
check = 0
for i in range(n):
    if p[i] == 'H' or p[i] == 'Q' or p[i] == '9':
        check = 1
if check == 1:
    print("YES")
else:
    print("NO")
