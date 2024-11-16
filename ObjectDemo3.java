import java.lang.*;
class ObjectDemo{
    public static void main(String A[])
    {
        demo obj = new demo();
        obj = null;
        
    }
}   

class demo
{
    public demo()
    {
        System.out.println("Inside Constructor");
    }
    protected void finalize()
    {
        System.out.println("Inside");
    }
}