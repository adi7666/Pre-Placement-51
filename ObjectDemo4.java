
class ObjectDemo{
    public static void main(String A[])
    {
        demo obj = new demo("Sagar", 21,89);
        System.out.println("Name is : "+obj.Name);
        System.out.println("Age is :",+obj.Age);
        System.out.println("maarks is :",+obj.Marks);
        demo dobj = (demo)obj.clone();
    }
}   

class demo implements Cloneable
{
    public String Name;
    public int Age;
    public int Marks;
    public demo(String A, int B , int C){
        this.Name =A;
        this.Age = B;
        this.Marks = C;

    }
    public Object clone() throws CloneNotSuppoertedException
    {
        return super.clone();
    }
}