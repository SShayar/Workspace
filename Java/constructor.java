public class constructor{
  //Dynamic Method Dispatch
  //run timeploymorphism 
    void greet(){
        System.out.println("hi");
    }

}
class constructor2 extends constructor{
    @Override
     void greet(){
        System.out.println("Hello");
     }
}
class test{
    public static void main(String[] args) {
        constructor obj = new constructor2();
        obj.greet();
    }
}