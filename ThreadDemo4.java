class ThreadDemo4

{
    public static void main (String a[])
    {
        System.out.println("Inside the main thread");

        demo dobj = new demo();
        Thread tobj = new Thread(dobj);
        tobj.setName("PPA");
        tobj.start();
    }
}
class demo extends Thread 
{
    public void run()
    {
        System.out.println("Thread is Ruuning"+ Thread.currentThread().getName());
    }
}