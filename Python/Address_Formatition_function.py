# function which give output Address in a format described
def address(Address): # function intialise
    # function defined
    house_no=0 # Varible to store Number 
    string=[]  # list varible store street and city else i>e string
    words=Address.split() # spliting parameters of defination and storing in words 
    for word in words:   # itreating a loop in words 
        if word.isnumeric(): # condtion applied to variable is numeric if it is the stored in house_no
            house_no=word
        else:
            string.append(word) # condtion applied to variable is string if it is the stored in string
    return "House number {} on Street named {}".format(house_no," ".join(string)) # Returnig output in described format 

print(address("123 Main Street"))
print(address("1001 1st Ave L.A"))