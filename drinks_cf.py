n=int(input())
a=[]*n
cocktail=0
a=[int(x) for x in input().split()]
for i in range(n):
    cocktail+=a[i]
sum=100*n
print(cocktail/sum*100)
