class ThreadDemo5

{
    public static void main (String a[])
    {
        System.out.println("Inside the main thread  "+ Thread.currentThread().getName());

        demo dobj = new demo();
        Thread tobj = new Thread(dobj);
        tobj.setName("PPA");
        demo dobj2 = new demo();
        Thread tobj2 = new Thread(dobj);
        tobj2.setName("LB");
        
        tobj.start();
        tobj2.start();
        System.out.println("End of main Thread ,,,,");
    }
}
class demo extends Thread 
{
    public void run()
    {

        System.out.println("Thread is Ruuning"+ Thread.currentThread().getName());
        try
        {
         for(int i =0; i<10; i++){
            System.out.println(Thread.currentThread().getName() + "With ID : " + i);
            Thread.sleep(1000);
         }   
        } catch(Exception  obj){} 
    }
}