import java.util.*;
public class febbonaci  extends Thread {
    void run(int arg){
        for(int i =0; i<=arg; i++){
            System.out.print(febbonacifun(i)+" ");
        }
    }
    int febbonacifun(int arg){
        if ( arg<=1){
            return arg;
        }
        else{
            return febbonacifun(arg-1) + febbonacifun(arg-2);
        }
    }
    public static void main(String[] args){
        febbonaci f1 = new febbonaci();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The range of Your febbonaci series\t:");
        int arg =sc. nextInt();
        System.out.printf("Feboonaci Series is :");
        f1.run(arg);
    
    }
}
