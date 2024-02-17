public class SmallestNumber {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 5;
        int num3 = 15;
        int smallest = findSmallestNumber(num1, num2, num3);
        System.out.println("The smallest number among " + num1 + ", " + num2 + ", and " + num3 + " is: " + smallest); }
    // Method to find the smallest number among three numbers
    public static int findSmallestNumber(int a, int b, int c) {
        int smallest = a; // Assume the first number is the smallest
        if (b < smallest) {
            smallest = b; // Update if the second number is smaller
        }
        if (c < smallest) {
            smallest = c; // Update if the third number is smaller
        }

        return smallest;
    }
}
