# Function returns Enter Phrases In Pig_Latin 
def pig_latin(phrases):# function intialise
    output="" #output variable of String type
    words=phrases.split() # Phrases is Splited in words Variable
    for word in words: # loop itreated
        output=word[1].upper() +word[2:]  # contion Applied
        output= output + word[0].lower() + "ay"  # Elements stored in output 
    return output # function Return Output Variable
print(pig_latin("Krishan"))
print(pig_latin("amit"))