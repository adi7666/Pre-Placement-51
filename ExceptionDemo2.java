import java.util.Scanner;
class ExceptionDemo1{
    public static void main(String a[]){
        Scanner sobj = new Scanner(System.in);
        int Arr[] = {10, 20,30,40,50};
        int index = 0;
        System.out.println("Enter The Index : \n");
        index  = sobj.nextInt();
        System.out.println("Value of given index is : "+Arr[index]);
    }
}

