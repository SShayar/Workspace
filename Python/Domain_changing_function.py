# Function Check Enterd string Ends with enterd old Parameter and replace with Enterd  new Parameter
def replace_ending(sentence,old,new): # function Intialise
    i=len(sentence)                   # String Length Calculated
    j=len(old)                        # old Parameter length calculated
    if sentence.endswith(old):        # condition checks string lenght is equal to old parameter string 
        new_sentence=sentence[0:i-j-1]  + new   # if condition verified the replaced with new parameter 
        return new_sentence                      # return Result
    
print(replace_ending("007kmurari@gmail.com","@gmail.com","@outlook.com"))
print(replace_ending("KrishanMurari9895@gmail.com","@gmail.com","@yahoo.com"))
