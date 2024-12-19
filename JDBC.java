import java.sql.*;

class JDBC
{
    public static void main(String arg[])  throws Exception
    {
        Class.forName("com.mysql.jdbc.Driver");
        String URl = "jdbc:mysql://localhost:3306/PPA";
        String UserName = "root";
        String Password = "root";
        //Class.forName("com.mysql.jdbc.Driver");
        //DriverManager.registerDriver(new com.msql.jdbc.Driver());
        String Query = "select * from student where id = 21";

        Connection cobj = DriverManager.getConnection(URl,UserName,Password);

        Statement sobj = cobj.createStatement();
        ResultSet robj = sobj.executeQuery(Query);

        while(robj.next())
        {
            System.out.print("RID ="+robj.getInt("rool_no")+" ");
            System.out.print("Name ="+robj.getString("name")+" ");
            System.out.print("Address ="+robj.getString("address")+" ");
            System.out.print("Marks ="+robj.getInt("marks")+" ");

            
        }
    }
}
