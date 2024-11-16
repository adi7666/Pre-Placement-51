import java.util.*;

@SuppressWarnings("unu implements InputDemosed")
public class InputDemo {

    public static void main(String a[]) {
        Scanner sobj = new Scanner(System.in);

        int No1 = 0, No2 = 0, Ans = 0;

        System.out.println("Enter The First Number: ");
        No1 = sobj.nextInt();

        System.out.println("Enter Second Number:");
        No2 = sobj.nextInt();
        Ans = No1 + No2;

        System.out.println("Addition IS :"+Ans);
    }
    
}
