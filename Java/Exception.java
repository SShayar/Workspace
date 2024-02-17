public class Exception {
    public static void main(String[] args) {
        int n = 10;
        try{
            int sum = 10/0;
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
        finally{
            System.out.println("Program ends here");
        }
    }
}
