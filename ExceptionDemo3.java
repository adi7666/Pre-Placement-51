import java.util.Scanner;
class ExceptionDemo3{
    public static void main(String a[]){
        int No1 = 0 , No2 =0, Ans =0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter First NUmber :");
        No1 = sobj.nextInt();

        System.out.println("ENter Second Number :");
        No2 = sobj.nextInt();
        try{
            System.out.println("Inside try block");
            Ans = No1 / No2;
        }catch(ArithmeticException){
            System.out.println("Inside Catch Block");
            System.out.println(obj);
        }
        finally{
            System.out.println("Inside Finally block");
        }

        System.out.println("Division is : "+Ans);
    }
}