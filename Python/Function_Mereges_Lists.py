# function which Merege Two List one After Another
amies_list = ["Alice", "Cindy", "Bobby", "Jan", "Peter"]   # first List                  
Drews_list = ["Mike", "Carol", "Greg", "Marcia"]           # Second List
def combine(list1,list2): # function Initalise
    list3 = list2.copy()  # coping list 3 in list 1
    list3.extend(list1)   # merging list1 in list 3
    return list3          # returning list 3

print(combine(amies_list,Drews_list))