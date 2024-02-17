public class variableScope {
     //static variable 
   final String st5 ="krishan";
   static String sirname = "Mr.";
   
   //instance variable 
    String lastname = "Murari";
    String greet(){
        //local variable
        String name = "Murari";
        return "Hi "+ sirname +name + lastname; 
    }
    public static void main(String [] srgs){
       variableScope obj = new variableScope();
       System.out.println(obj.greet());  
    }
}
