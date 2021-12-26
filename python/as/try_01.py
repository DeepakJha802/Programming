#-------------------------------

# def sum(x,y):
#    return (x+y)
# print(sum(5,9))

# #----------------------------

# x=5
# y=3
# def swap(a,b):
#     return(b,a)
# x,y=swap(x,y)
# print(x,y)

# #-----------------------------

# list=[2,3,5,6,7]
# def fun(list):
#     print(list)
# fun(list)

# #------------------------------

# list=[2,3,5,6,7]
# def fun(list):
#     print("maximum",max(list))
# fun(list)

# #-------------------------------

# name="deepak"
# age=20
# def display(name,age):
#     print(name)
#     print(age)
# display(name,age)

# #-------------------------------

# name="deepak"
# age=20
# def display(name,age):
#     print(name)
#     print(age)
# display(age,name)

#---------------------------------

# def display(name,age=20):
#     print(name)
#     print(age)
# display("deepak")

#---------------------------------

# def display(name,age=20):
#     print(name)
#     print(age)
# display("deepak",32)

#---------------------------------

# def display(name,age=20):
#     print(name)
#     print(age)
# display("deepak")

#---------------------------------

# x=10
# def sum():
#     global x
#     print(x)
# sum()

#----------------------------------

n=int(input("Enter number:"))
x=n
rev=0
while(n>0):
    dig=n%10
    rev=rev*10+dig
    n=n//10
if(x==rev):
    print("The number is a palindrome")
else:
    print("The number isn't a palindrome")
