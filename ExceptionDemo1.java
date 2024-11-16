import java.util.Scanner;
class ExceptionDemo1{
    public static void main(String a[]){
        int No1 = 0 , No2 =0, Ans =0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter First NUmber :");
        No1 = sobj.nextInt();

        System.out.println("ENter Second Number :");
        No2 = sobj.nextInt();

        Ans = No1 / No2;

        System.out.println("Division is : "+Ans);
    }
}