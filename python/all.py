#swaping of two numbers

a = int(input("Enter the first number : "))
b = int(input("Enter the second number : "))

print("before swaping a = ", a, " and b = ", b)
c = a
a = b
b = c
print("after swaping a = ", a, " and b = ", b)


##A palindrome is a string that reads the same backward as forward. Write a programs that determines whether the string is a palindrome.

str = input("Enter a string: ")
length = len(str)
flag = 1
for i in range(0,length//2):
    if str[i] != str[length-1-i]:
        flag = 0
        break
if flag == 1:
    print("String is palindrome")
else:
    print("String is not palindome")


#even or odd 
n=int(input("Enter a number: "))
if (n%2==0):
    print(n,"is Even")
else:
    print(n,"is Odd")

#prime or not

# create a new string in reverse of first string and display it.

str = input("Enter a string: ")
newstr = ""
for i in str:
    newstr = i + newstr
print("New string:", newstr)


#leap year or not
year=int(input("Enter The Year : "))
if(year%4==0):
    print(year,"is Leap Year")
else:
    print(year,"is Not Leap Year")
    
#vowel or consonent.

char=input("Enter a Character : ")
if char in ('a','e','i','o','u') or char in ('A','E','I','O','U'):
    print(char,"Is Vowel")
else:
    print(char," is Consonant",char)

