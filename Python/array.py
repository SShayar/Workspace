lis1=[]
lis2=[]
lis=[]
print("")
r=int(input("First Matrix Enter Number Of elements:\t"))
for i in range(1,r+1):
    print("1) Matrix",i,end="-")
    num = input()
    lis1.append(num) 
r=int(input("First Matrix Enter Number Of elements:\t"))
for i in range(1,r+1):
    print("2) Matrix",i,end="-")
    num = input()
    lis2.append(num) 
choice = str(input("Enter Operation\n Add\n Sub\n"))
if choice == "Add":
    print(lis1,lis2)
    lis.add(lis1,lis2)
    print(lis)
elif choice == "Sub":
    print(lis1,lis2)
    lis.sub(lis1,lis2)
    print(lis)
else:
    print("invalid Choice !!!")
