# Function Check Palindrome words
def is_palindrome(input_string): # function Intialise
    new_string = input_string.upper().replace(" ","") # Enterd String Replace white space and stores in new_string
    reverse_string=new_string[::-1]                   # new string get reversed
    if new_string==reverse_string:                    # condition applied to check palindrome word
        return True        
    return False                                      # returning result
print(is_palindrome("never odd or even"))
print(is_palindrome("Radar"))