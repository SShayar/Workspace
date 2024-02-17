import java.util.*;
public class aaryas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr1[] =  new int [2];
        //multi dimenisonal array
        int arrmulti[][] = new int[3][3];
        for(int i =0; i<2; i++ ){
            System.out.println("Enter Number in array");
            arr1[i] = sc.nextInt(); 
        }
        //printing  array now  using for loop
        for(int i =0; i<2; i++ ){
            System.out.println(i+" Element of the array is: "+arr1[i]);
        }
       for(int i : arr1){
            System.out.println(i);
       }
       //array functions 
       int arr3[] = {1,2,5,3,4};
       int arr2[] = Arrays.copyOf(arr3,2);
       System.out.println(arr3.equals(arr2));
       String str = Arrays.toString(arr3);
       System.out.println(str);
       Arrays.sort(arr3);
       System.out.println(arr3);
       System.out.println(Arrays.binarySearch(arr2, 3));
    }



}
