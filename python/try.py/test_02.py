# Deepak kumar jha
# 10800120057
# 28/01/2022
# B(1). Write a function in python, which accept a list of names as argument and return total number of palindrome names.
# Use the same function to test the code.

def palin_list(lst):
    count=0
    for i in lst:
        if(i==i[::-1]):
            count+=1
    return count
my_lst=["deepak","madam","mohan","141","jalaj"]
print("List : ",my_lst)
print("Number of Palindrome Name : ",palin_list(my_lst))
