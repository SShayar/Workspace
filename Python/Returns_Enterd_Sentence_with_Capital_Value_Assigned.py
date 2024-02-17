# function Which returns Enterd Sentence with upper case value Entered
"""
def highlight_word(string,value): # function intialise
    String=string.split() # Entered String is Splited And stores in String Variable
    new_string = [] # New_string variable of List Type
    for st in String: # loop itreated 
        if st==value: # Condtion Checked
            st=st.upper()
        new_string.append(st) # Elements of st appended in new_string
    return new_string

print(highlight_word("Have a nice day", "nice"))
print(highlight_word("Shhh, don't be so loud!", "loud"))
print(highlight_word("Automating with Python is fun", "fun"))  

"""

# function Which returns Enterd Sentence with upper case value Etered
def highlight_word(string,value):# function intialise
    return string.replace(value,value.upper()) # returnig Entered String element replacing with value Enterd

print(highlight_word("Have a nice day", "nice"))
print(highlight_word("Shhh, don't be so loud!", "loud"))
print(highlight_word("Automating with Python is fun", "fun"))