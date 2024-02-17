public class methodoverloading {
    void greet(){
        System.out.println("hi");
    }
    void greet(String str){
        System.out.println("hi" + str);
    }
    public static void main(String[] args) {
        String str = "Krishan";
        methodoverloading obj = new methodoverloading();
        obj.greet();
        obj.greet(str);
    }
}
