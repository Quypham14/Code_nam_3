'''with open("data.txt","w") as file:
    file.write("Minh Nguyet\n")
# Cach 2
file=open("data.txt","w")
file.write("a\n")
file.close()'''
'''colors=[" blue", "green", "red","yellow"]
try:
    colors.remove("black")
except:
    print("No problem")
#remove last element
colors.pop()
print(colors)
#add element with id
colors.insert(0,"purple")
print(colors)
#output id element in the first check
print(colors.index("red"))'''
# Create class
class student:
    #Khoi tạo
    def __init__(self):
        self.name=None
        self.age=None
        self.math_score=None
        self.literature_score=None
    def sum(self):
        return(self.literature_score+self.math_score)/2
s1=student()
s1.name="Thu"
s1.age="21"
s1.math_score=9
s1.literature_score=7
print(s1.sum())
