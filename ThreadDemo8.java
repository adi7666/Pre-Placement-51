class ThreadDemo5

{
    public static void main (String a[]) throws Exception
    {
        System.out.println("Inside the main thread  "+ Thread.currentThread().getName());

        demo dobj = new demo();
        Thread tobj = new Thread(dobj);
        tobj.setName("PPA");
        tobj.setPriority(1);
        tobj.start();
        
    }
}
class demo extends Thread 
{
    public void run()
    {

        System.out.println("Thread is Ruuning"+ Thread.currentThread().getName());
        try
        {
              
            // System.out.println(Thread.currentThread().getName() + " With ID : " + i);
            System.out.println("Thread Priority is : "+Thread.currentThread().getPriority());  
            // Thread.sleep(1000);
        } catch(Exception  obj){} 
    }
}


