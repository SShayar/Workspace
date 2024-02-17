// Program to manage student data using Inheritance
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class student_info // class to take student information
{
public:
  int roll, age;
  char name[50], gender[20], stream[50], sec, semester;
  student_info() // constructor to take input student information
  {
    cout << "Enter Student Name-              \t";
    fflush(stdin);
    gets(name);
    cout << "Enter Roll Number-               \t";
    cin >> roll;
    cout << "Enter father's Name-             \t";
    fflush(stdin);
    gets(gender);
    cout << "Enter Age-                       \t";
    cin >> age;
    cout << "Enter Course-                    \t";
    fflush(stdin);
    gets(stream);
    cout << "Enter Smester (1, 2, 3, 4, 5, 6):\t";
    cin >> semester;
    cout << "Enter Section-                   \t";
    cin >> sec;
  }
  void showinfo(); // function to show student personal informations
};
class fees : public student_info // class to store fees details of student
{
public:
  float paidfees = 0.0, remaing_fees = 0.0;
  fees()
  {
    for (int i = 0; i <= 50; ++i)
    {
      cout << "-";
    }
    cout << endl;
    cout << "FEES STATUS" << endl;
    switch (semester)
    {
    case '1':
      cout << "Total fees-22000/-" << endl;
      cout << "Enter Paid Amount-" << endl;
      cin >> paidfees;
      remaing_fees = 22000 - paidfees;
      break;
    case '2':
      cout << "Total fees-24300/-" << endl;
      cout << "Enter Paid Amount-" << endl;
      cin >> paidfees;
      remaing_fees = 24300 - paidfees;
      break;
    case '3':
      cout << "Total fees-19830/-" << endl;
      cout << "Enter Paid Amount-" << endl;
      cin >> paidfees;
      remaing_fees = 19830 - paidfees;
      break;
    case '4':
      cout << "Total fees-23020/-" << endl;
      cout << "Enter Paid Amount-" << endl;
      cin >> paidfees;
      remaing_fees = 23020 - paidfees;
      break;
    case '5':
      cout << "Total fees-26400/-" << endl;
      cout << "Enter Paid Amount-" << endl;
      cin >> paidfees;
      remaing_fees = 26400 - paidfees;
      break;
    case '6':
      cout << "Total fees-20000/-" << endl;
      cout << "Enter Paid Amount-" << endl;
      cin >> paidfees;
      remaing_fees = 20000 - paidfees;
      break;
    default:
      cout << "Enter correct Semsester Number";
      break;
    }
  }
  void fees_structure()
  {
    for (int i = 0; i <= 80; ++i)
    {
      cout << "*";
    }
    cout << endl;
    cout << "Remaning Amount to be paid By " << name << ":" << remaing_fees << "/- RUPEES" << endl;
    for (int i = 0; i <= 80; ++i)
    {
      cout << "*";
    }
  }
};
class subject_marks : public fees // class to manage result of students
{
  float Marks[10], Total_subject;
  string Remark;
  string sub[10];

public:
  subject_marks() // constructor to claculate performance of student and give remarks
  {
    for (int i = 0; i <= 50; ++i)
    {
      cout << "-";
    }
    cout << endl;
    cout << "MST-1 (Total Marks 40)\t" << endl;
    cout << "Enter Total Number of Subject\t" << endl;
    cin >> Total_subject;
    for (int i = 1; i <= Total_subject; i++)
    {
      cout << i << ":";
      cout << "Subjects Name-  \t";
      cin >> sub[i];
      cout << "   Enter Marks- \t";
      cin >> Marks[i];
    }
    showinfo();
    cout << endl;
    for (int i = 1; i <= Total_subject; i++)
    {
      cout << i;
      cout << "\tSubject-" << sub[i] << "\t"
           << "\t\tMarks-" << Marks[i];
      Remark = (Marks[i] > 16) ? (Marks[i] > 20) ? (Marks[i] > 25) ? (Marks[i] > 30) ? "Excellent" : "Very Good" : "Good" : "Average" : "Fail";
      cout << "\tRemarks-" << Remark << endl;
    }
    cout << endl;
    fees_structure();
    cout << endl;
  }
};
void student_info::showinfo()
{
  for (int i = 0; i <= 80; ++i)
  {
    cout << "-";
  }
  cout << endl;
  cout << "Name of STUDENT: " << name << "\tRoll Number Of STUDENT: " << roll << endl;
  cout << "Father's name: Mr." << gender << "\tAge: " << age << "\tCourse: " << stream << "-" << semester << "\tSection: " << sec << endl;
  for (int i = 0; i <= 80; ++i)
  {
    cout << "-";
  }
  cout << endl;
}
int main()
{
  int number;
  for (int i = 0; i <= 52; ++i)
  {
    cout << "*";
  }
  cout << endl;
  cout << "---------Welcome To the Student Data Manager---------" << endl;
  for (int i = 0; i <= 52; ++i)
  {
    cout << "*";
  }
  cout << endl;
  cout << "Enter Total Number of student, Data you want to manage" << endl;
  cin >> number;
  subject_marks s1[number];
  return 0;
}