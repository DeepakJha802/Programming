#NAME - DEEPAK KUMAR JHA
#ROLL - 1080120057 , BATCH - A2
# DATE - 10/12/2021
# QUESTION NUMBER 1.

print("Input a Positive Integer 99> and <999 :")
n=input()
flag=0
#condition of range 
if(n.isnumeric()==True and int(n)>=99 and int(n)<=999):
#Perfect number Check
    n1=int(n)
    sum=0
    for i in range(1,n1):
        if(n1%i==0):
            sum=sum+i
    if(sum==int(n)):
        print(n,"Is a Perfect Number")
    else:
        print(n,"Is Not a Perfect Number")
        

#Fibonacci Check
    c=0
    b=1
    a=1
    n=int(n)
    if(n==0 or n==1):
        print(n,"Is a Term Of Fibonacci Series")
    else:
        while(c<n):
            c=a+b
            b=a
            a=c
        if(c==n):
            print(n,"is a term of Fibonacci series")
        else:
            print(n,"is not a term of fibonacci series")
else:
    print("You Must Enter a Positive Integer Between 99 to 999.")
    
# composite number cheack
count = 0;
for i in range(99, n+1):
    if(n%i==0):
        count+=1;
if(count > 2):
   print("%d is a composite no" %n)
else:
   print("%d is not a composite no" %n)

# sum of the digit of its cube.
n3 = str(n)
sum=0
for i in range(0,len(n3)):
  sum=sum+pow(int(n3[i]),3)
print("Sum of cube of digits  : ",sum)
