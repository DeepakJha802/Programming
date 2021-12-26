num=int(input("Enter The Number : "))
#Composite Number 
count = 0;
for i in range(1, num+1):
    if(num%i==0):
        count+=1;
if(count > 2):
   print("%d is a composite number" %num)
else:
   print("%d is not a composite number" %num)
print("\n")

#Fibonacci Series
c=0
a=1
b=1
if (num==0 or num==1):
    print("%d Belong To Fibonacci Series" %num)
else:
    while c<num:
        c=a+b
        b=a
        a=c
    if c==num:
        print("%d Belong To Fibonacci Series " %num)
    else:
        print("%d Not Belong To Fibonacci Series" %num)

# number is equal to the sum of the cubes of its digits.
num1 = str(num)
sum=0
for i in range(0,len(num1)):
  sum=sum+pow(int(num1[i]),3)
print("Sum of cube of digits  : ",sum)
if(sum==int(num1)):
  print("Number is matching to cube  : ", num1)
else:
  print("Number is not matching to cube : ",num1)
