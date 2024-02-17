public class runnable implements Runnable {
    public void run() {
        int i = 0;
        while (i < 100) {
            System.out.println("Helloo");
            i++;
        }
    }
    public static void main(String[] args) {
        runnable ri = new runnable();
        runnable1 ri1 = new runnable1();
        Thread th = new Thread(ri);
        Thread th1 = new Thread(ri1);
        th.setPriority(Thread.MAX_PRIORITY);
        th.start();
        // try{
        //     th.join();
        // }
        // catch(InterruptedException e){
        //     System.out.println(e);
        // }
        th1.setPriority(Thread.MIN_PRIORITY);
        th1.start();
    }
}
class runnable1 implements Runnable {
    public void run() {
        int i = 0;
        while (i < 100) {
            System.out.println("Helloo new");
            i++;
        }
    }

}
