class MYThread extends Thread {
 public void run(){
       int i =0;
      while(i<100){
        System.out.println("Hell");
        i++;
      }
 }
}
class MYThread2 extends Thread {
 public void run(){
     int i =0;
      while(i<100){
        System.out.println("Helloo");
        i++;
      }
  }  
}


 public static void main(String[] args) {
    MYThread th = new MYThread();
    MYThread2 th2 = new MYThread2();
    
th2.start();
th.start();
 }

