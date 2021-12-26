#Deepak Kumar Jha,10800120057,10/12/2021,Examination Program 1
print("Input a Positive Integer Less Than 999 :")
n=input()
flag=0
#nber Check
if(n.isnumeric()==True and int(n)>=0 and int(n)<=999):
    #Prime Check
    for i in range(2,int(n)):
            rem = int(n)%i
            if(rem==0):
                flag=1
                break
    if(flag==1 or int(n)<=1):
        print(n, "is not a Prime nber.")
    else:
        print(n, "is a Prime nber.")
    #Palindrome Check
    n2 = int(n)
    rev = 0
    while(n2>0):
        digit = n2%10
        rev = digit + (rev*10)
        n2 = int(n2/10)
    print("Reverse of", n, "is", rev)
    if(int(rev)==int(n)):
        print(n,"is Palindrome")
    else:
        print(n,"is not Palindrome")
    #Armstrong Check
    n3=i=int(n)
    Sum=0
    while(n3>0):
        digit=n3%10
        Sum=Sum+(digit**3)
        n3=int(n3/10)
    if(i==Sum):
        print(n,"is an Armstrong no")
    else:
        print(n,"is not an Armstrong no.")
    #Square Check
    n4=int(n)
    srt=n4**(1.0/2.0)
    if(round(srt)**2==int(n)):
        print(n,"is a perfect square")
    else:
        print(n,"is not a perfect square") 
    #Cube check
    n5=int(n)
    crt=n5**(1.0/3.0)
    if(round(crt)**3==int(n)):
        print(n,"is a perfect cube")
    else:
        print(n,"is not a perfect cube")
    #Perfect Check
    n6=int(n)
    s=0
    for i in range(1,n6):
        if(n6%i==0):
            s=s+i
    if(s==int(n)):
        print(n,"is a Perfect nber")
    else:
        print(n,"is not a Perfect nber")
    #Fibonacci Check
    c=0
    b=1
    a=1
    n=int(n)
    if(n==0 or n==1):
        print(n,"is a term of Fibonacci series")
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
    print("You must enter a Positive Integer between 0 to 999!!")

#Composite Number 
count = 0;
for i in range(1, n+1):
    if(n%i==0):
        count+=1;
if(count > 2):
   print("%d is a composite no" %n)
else:
   print("%d is not a composite no" %n)
print("\n")

# number is equal to the sum of the cubes of its digits.
num1 = str(n)
sum=0
for i in range(0,len(num1)):
  sum=sum+pow(int(num1[i]),3)
print("Sum of cube of digits  : ",sum)
if(sum==int(num1)):
  print("Number is matching to cube  : ", num1)
else:
  print("Number is not matching to cube : ",num1)
  