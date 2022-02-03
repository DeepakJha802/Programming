fp = open("C:\\Users\\DEEPAK\\Downloads\\Sample1.txt", "rt");
print("\n", fp.read(), "\n")
fp.close()

fp = open("C:\\Users\\DEEPAK\\Downloads\\Sample1.txt", "rt");

number_of_vowels = 0
number_of_consonants = 0
number_of_uppercase = 0
number_of_lowercase = 0

for i in fp.read():
    if i in "aeiouAEIOU":
        number_of_vowels += 1
    elif i in "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ":
        number_of_consonants += 1
    elif i in " ":
        number_of_uppercase += 1
    elif i in " ":
        number_of_lowercase += 1

print("Number of vowels:", number_of_vowels)
print("Number of consonants:", number_of_consonants)
print("Number of whitespaces:", number_of_whitespaces)
print("Number of special characters:", number_of_special_characters)
