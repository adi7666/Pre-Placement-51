class Encapsulation {
    public static void main(String arr[]){
        System.err.println("Inside the Mian Functiion");
        Arithmatic aobj1 = new Arithmatic();
        Arithmatic aobj2 = new Arithmatic(55,42);

        int Ret = 0;
        Ret = aobj1.Addition();
        System.out.println("Addition is : "+Ret);

        Ret = aobj2.Substraction();
        System.err.println("Substravtion is : "+Ret);
    }
 }
 
 
 class Arithmatic{
    public int No1;
    public int No2;
    public Arithmatic(){
        System.out.println("Inside default Constructor");
        this.No1 = 0;
        this. No2 = 0;
    }

    public Arithmatic(int A, int B){
        System.out.println("inside parametrised consturctor");
        this.No1 =A;
        this.No2 =B;
    }
    public int Addition(){
        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    }
    public int Substraction(){
        int Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;
    }

 }

 