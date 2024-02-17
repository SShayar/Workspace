import java.util.Scanner;
interface Innerfactorail {

    int findfactorial(int arg);
}
class factorail implements Innerfactorail{
    int findfactorail(int arg){
        if(arg == 0 || arg == 1){
            return arg;
        }
        else{
            
            return arg * findfactorail(arg-1);
        }

    }
}
public class mainclass {
       public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        factorail Obj = new factorail();
        System.out.format("\tUser Enter Your Number:\n");
        int arg = sc.nextInt();
        System.out.printf("factorial of %d is %d",arg,Obj.findfactorail(arg));
       }
    
}
