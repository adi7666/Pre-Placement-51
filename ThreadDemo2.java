class ThreadDemo2

{
    public static void main (String a[])
    {
        System.out.println("Inside the main thread");

        demo dobj = new demo();
        Thread tobj = new Thread(dobj);
        tobj.start();
    }
}
class demo extends Thread 
{
    public void run()
    {
        System.out.println("Thread is Ruuning");
    }
}