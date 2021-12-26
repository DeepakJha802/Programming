def my_fun(num):
    if(num>0):
        print(num)
        return num+my_fun(num-1)
    else:
        return 0
    # print(sum)
n=int(input("Enter a number : "))
print(my_fun(n))
