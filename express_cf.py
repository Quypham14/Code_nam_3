a=int(input())
b=int(input())
c=int(input())
s_1=a+b*c
s_2=a*(b+c)
s_3=a*b*c
s_4=(a+b)*c
s_5=a+b+c
s_6=a*b+c
sum=max(s_1,s_2,s_3,s_4,s_5,s_6)
print(sum)