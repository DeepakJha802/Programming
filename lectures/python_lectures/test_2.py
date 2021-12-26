#Creating 10 City Name List
city=["Delhi", "Jaipur", "Nagpur", "Mumbai", "Kolkata", "Asansol", "Haryana", "Kanpur", "Punjab", "Darbhanga"]

#Creating New List to Add City, Lowest Temperature and Highest Rainfall
city_temp=[]
city_rainfall=[]

i=0
for name in city:
    print("Enter Detail of ", city[i])

    #Taking Input of Lowest Temerature in Int
    lowest_temp=int(input("Enter Lowest Temperatur of the Year "))

    #Taking Input of Highest Rainfall in Int
    highest_rainfall=int(input("Enter Highest Rainfall of the Year "))
    print("\n")

    #Inserting City in New List
    city_temp.append(city[i])

    #Inserting lowest Temperatur of the Year in List
    city_temp.append(lowest_temp)

    #Inserting Highest Rainfall Of the year in List
    city_rainfall.append(highest_rainfall)
    i=i+1
    
city_dict=dict((city[i], {city_temp[i]:city_rainfall[i]}) for i in range(len(city)))
print(city_dict)
