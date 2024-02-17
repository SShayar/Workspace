# function return Intials Of Sentence Entered 
def intials(phrase): # function Initalise
    words=phrase.split()  # Phrases Splited in words Variable
    result=""             # result variable of string Type
    for word in words:    # loop itreated
        result+=word[0].upper()  # s Storing word variable value in result variable
    return result                # retunig result
print(intials("universal serial bus"))
print(intials("operating system"))