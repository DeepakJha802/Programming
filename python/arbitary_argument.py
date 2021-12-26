# def my_fun(*n1):
#     print("Hello",n1)
#     print(type(n1))
# my_fun(59,54,21,36,"bat","true")

#------------------------------------------

# def my_fun(**n1):
#     print("Hello",n1)
#     print(type(n1))
# my_fun(l1=59,l2=54,l3=21,l4=36,l5="bat",l6="true")

#---------------------------------------------------------

# def my_fun(list):
#     print("hello",list)
# l1=[1,2,3,4,5,6]
# my_fun(l1)

#--------------------------------------------------------------
def my(dict):
    print(dict)
def my_fun(roll,list1,list2):
    dict={}
    for i in range(0,len(roll)):
        dict[roll[i]]=(list1[i],list2[i])
    my(dict)
    
roll=[1,2,3,4,5]
list1=[12,"deepak","apple",15.55,56]
list2=['A','B','C','o','E']
my_fun(roll,list1,list2)
