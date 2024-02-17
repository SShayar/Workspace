/**Auther name = Krishan
 * program to know about basic syntax of java
 */
public class objectClass {
    // variable example
    byte id=101;
    short rommNo=345;
    int roolNo = 2111778;
    long phoneNO= 9115880673L;

    char sex='M';
    String name = "Krishan";

    float salary = 50000.0f;
    double SalaryPerAnnum = 600000.0d;

    int []arr = {1,2,3};
    public static void main(String []args){
       objectClass obj = new objectClass();
       //diffrent typle to print in java & Excape sequence

       System.out.format("\tName is : %s\n\tSEX is : %s",obj.name,obj.sex);
       System.out.printf("\tRoll No is :%d\n\tPhone No is :%d",obj.roolNo,obj.phoneNO);
       System.out.printf("\tSalary is %.2f \n\tPackage of  %.2f ",obj.salary,obj.SalaryPerAnnum);
       System.out.println();
       System.out.print("Room No is :"+obj.rommNo);
    }

}
