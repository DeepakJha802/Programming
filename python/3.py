fp = open("C:\\Users\\DEEPAK\\Downloads\\Sample1.txt", "rt");

vowels = "aeiouAEIOU"
consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
list1 = []
list2 = []
str = fp.read()
print(str)
j = ""
for i in str:
    if i == ' ':
        if j[0] in vowels:
            list1.append(j)
        elif j[0] in consonants:
            list2.append(j)
        j = ""
    else:
        j = j + i
print("\nWords starting with a vowel Is :\n",list1)
print("\nWords starting with a consonant Is :\n",list2)
