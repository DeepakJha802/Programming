def FindFact(n):
    for i in range(1, n+1):
        if n % i == 0:
            print(i, end=" ")
    print()

print("Enter a Number: ", end="")
try:
    num = int(input())
    print("\nFactors of " +str(num)+ " are: ", end="")
    FindFact(num)
except ValueError:
    print("\nInvalid Input!")
    
    #-----using loop 
    
# print("Enter a Number: ", end="")
# try:
#     num = int(input())

#     print("\nFactors of " +str(num)+ " are: ", end="")
#     for i in range(1, num+1):
#         if num % i == 0:
#             print(i, end=" ")
#     print()
# except ValueError:
#     print("\nInvalid Input!")
