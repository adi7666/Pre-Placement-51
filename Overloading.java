public class Overloading {
    public static void main(String a[]){
        Arithmatic aobj = new Arithmatic();
        System.out.println(aobj.Addition(10,11));
        System.out.println(aobj.Addition(10, 23, 45));
        System.out.println(aobj.Addition(10.0f, 20.0f));
    }
}

class Arithmatic{
    public int Addition(int A, int B){
        return A+B;

    }
    public int Addition(int A, int B , int C){
        return A+B+C;
    }
    public float Addition(float A, float B){
        return A+B;
    }
}
