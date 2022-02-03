# Deepak kumar jha
# 10800120057
# 28/01/2022
# A(1). To print even no from the list .

mylst = [True, "08", 78, "Rahul", 24, '31', 0, -44, "10"]

for i in mylst:
    if type(i) == int:
        if i % 2 == 0:
            print(i)
