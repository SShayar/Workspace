public class Operators {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 20;
        //assignment operator
        System.out.println(num1 += num2);
        System.out.println(num1 *= num2);
        System.out.println(num1 -= num2);
        System.out.println(num1 /= num2);
        System.out.println(num1 %= num2);
        //arthmetic Operators
        System.out.println(num1 + num2);
        System.out.println(num1 * num2);
        System.out.println(num1 - num2);
        System.out.println(num1 / num2);
        System.out.println(num1 % num2);
        //relation Operators
        System.out.println(num1 > num2);
        System.out.println(num1 < num2);
        System.out.println(num1 >= num2);
        System.out.println(num1 <= num2);
        System.out.println(num1 == num2);
        System.out.println(num1 != num2);
        //logical Operators
        System.out.println(num1 > num2 && num1 < num2);
        System.out.println(num1 > num2 || num1 < num2);
        System.out.println(!true);
        //betwise operator
        System.out.println(num1 & num2);
        System.out.println(num1 | num2);
        System.out.println(num1 ^ num2);
        System.out.println(num1 << num2);
        System.out.println(num1 >> num2);
        System.out.println(~ num2);
        //Tertionary Operator 
        int a = 19, b = 16, c = 10;
        int reslut = (a>b )? ((a>c)? a:c):((b>c) ? b:c);
        System.out.println(reslut);
        urnary Operator
        a++;
        b--;
        System.out.println(a);
        System.out.println(b);


    }
}
