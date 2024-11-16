import java.io.*;
class ExceptionDemo7{
    public static void main(String A[]) throws IOException
    {
        try{
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the name : ");
        String name = bobj.readLine();
        System.out.println("Enter Your Age : ");
        int Age = Integer.parseInt(bobj.readLine());

        System.out.println("Your name is : "+name);
        System.out.println("Your Name :" +Age);
        }
        catch(Exception obj){

        }
    }
}