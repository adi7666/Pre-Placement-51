import java.util.*;
class AgeInvalidException extends Exception
{
    public AgeInvalidException(String str)
    {
        super(str);
        System.out.println("Inside Constructor");
    }
}
class ExceptionDemo6{
    public static void main(String A[]){
        int Age = 0;
        Scanner sobj = new Scanner(System.in);
        Age = sobj.nextInt();
        try{
            System.out.println("Enter Your Age");
            if(Age < 18){
                AgeInvalidException aobj = new AgeInvalidException("Your age s less than 18------------");
                throw aobj;
            }
        }
        catch(AgeInvalidException obj){
            System.out.println("Inside Catch");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("Inside Finally");
        }
        System.out.println("End of Application");
    }
}
