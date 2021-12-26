def common_data(l1, l2):
     result = False
     for x in l1:
         for y in l2:
             if x == y:
                 result = True
                 return result
print(common_data([1,2,3,4,5], [5,6,7,8,9]))