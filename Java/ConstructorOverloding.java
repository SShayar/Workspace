public class ConstructorOverloding {
    ConstructorOverloding(){
        System.out.println("hi");
    }
    ConstructorOverloding(String str){
        System.out.println("hi" + str);
    }
    public static void main(String[] args) {
        ConstructorOverloding obj = new ConstructorOverloding();
        ConstructorOverloding obj2 = new ConstructorOverloding("Krishan");
    }
}
