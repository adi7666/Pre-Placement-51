import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;

class server {
    public static void main(String[] args) throws Exception{
    System.out.println("Server Application Running ...");

    ServerSocket ssobj = new ServerSocket(2100);
    System.out.println("Server is waiting for client at port number 2100");

    Socket sobj = ssobj.accept();              //Accept the request form the client
    System.out.println("Connection established with the client..");
    
    PrintStream ps = new PrintStream(sobj.getOutputStream());
    BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
    BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
    String str1, str2;
    System.out.println("Marvellous chat Messenger Application is Started");
    while((str1 = br1.readLine()) != null )
    {
        System.out.println("Client says :" +str1);
        System.out.println("Enter the message for client :");
        str2 = br2.readLine();
        ps.println(str2);
    }
    System.out.println("Thankyou for using the marvellous chat application");
    }
}
