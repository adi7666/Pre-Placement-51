import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.Socket;

class client {
    public static void main(String[] args) throws Exception
     {
        System.out.println("Client Application Running...");

        Socket sobj = new Socket("localhost", 2100);        //request to server
        
        System.out.println("Connection established with the Server..");

        PrintStream ps = new PrintStream(sobj.getOutputStream());   
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String str1, str2;
        System.out.println("Marvellous chat Messenger Application is Started");
        while(!(str1 = br2.readLine()).equals("end"))
        {
            ps.println(str1);
            str2 = br1.readLine();
            System.out.println("Enter the Message for server");
            System.out.println("Server says :" +str2);
        }
        System.out.println("Thank you for using the marvellous chat Application....");
    }
}
