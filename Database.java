import java.sql.Connection;          // 1
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.sql.*;
class Database
{
    public static void main(String arg[]) throws Exception
    {
        
        // Class.forName = "com.mysql.cj.jdbc.Driver";
        String URL = "C:\\Users\\jagta\\Downloads\\mysql-connector-j-9.1.0 (1)\\mysql-connector-j-9.1.0\\mysql-connector-j-9.1.0\\META-INF\\services://localhost:3306/Marvellous";
        String Username = "root";
        String Password = "root";
        String Query = "select * from student";


        Connection cobj = DriverManager.getConnection(URL,Username,Password);   // 2
        
        Statement sobj = cobj.createStatement();        // 3

        ResultSet robj = sobj.executeQuery("select * from student");      // 4

        while(robj.next())          // 5
        {
            System.out.println("RID : "+robj.getInt("rollno"));
            System.out.println("Name : "+robj.getString("name"));
            System.out.println("City : "+robj.getString("Address"));
            System.out.println("Marks : "+robj.getInt("marks"));                                    
        }
    }
}

// execute()            Create table
// executeQuery()       select
// executeUpdate()      delete / update / alter / insert