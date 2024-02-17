    interface InnerAbstractclass {

        void Show();
    }
    public abstract class Abstractclass {
        Abstractclass(){
            System.out.println("hello");
        }
        abstract void greet();

    }
    class imple extends Abstractclass implements InnerAbstractclass {
        void greet(){
            System.out.println("Hi");
        }
        public void Show(){
            System.out.println(" i am Showing");
        
        }
    public static void main(String[] args) {
        imple obj = new imple();
        obj.Show();
        obj.greet();
    }
}

