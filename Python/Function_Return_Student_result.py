# Function returns Student result
def  student_grade(name,grade): # function Intialise
    return"{:>3} recived {:>6.2f}% on the Exam".format(name,grade) # returnig value in format described Using format Function

print(student_grade("Krishan",99.32545))
print(student_grade("Amit",88.235))