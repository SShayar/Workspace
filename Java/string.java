public class string {
    public static void main(String[] args) {
        String str = new String("Krishan");
        String str1 = new String("     Krishan    ");
        String str2 = "Krishan";
        // string function in java
        System.out.println(str1.trim());
        System.out.println(str.substring(3));
        System.out.println(str.substring(3,5));
        System.out.println(str.replace("K","M"));
        System.out.println(str.equals(str2));
        System.out.println(str.equalsIgnoreCase(str2));
        System.out.println(str.toLowerCase());
        System.out.println(str.toUpperCase());
        System.out.println(str.isEmpty());
        
    }
}
