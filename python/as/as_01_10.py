def long_words(n, str):  
    word_len = []  
    txt = str.split(" ")  
    for x in txt:  
        if len(x) > n:  
            word_len.append(x)  
    return word_len   
print(long_words(3, "This is my Python Program"))  