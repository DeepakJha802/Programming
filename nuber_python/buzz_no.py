#python program to check number is buzz number or not.
num=int(input("Enter any Number : "))
if num%7==0 or num%10==7:
    print(num, "is a Buzz Number")
else:
    print(num, "is a not a Buzz Number")
