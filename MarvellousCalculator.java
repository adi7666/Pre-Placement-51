import java.awt.*;
import java.awt.event.*;

class Calculator extends WindowAdapter implements ActionListener
{
    public Frame mainFrame;
    public Button b1,b2,b3,b4;
    public Label lobj;
    public TextField t1,t2;
    Integer no1, no2;

    public Calculator(int Width, int Height, String Title)
    {
        mainFrame = new Frame(Title);
        mainFrame.setSize(Width, Height);
        
        mainFrame.addWindowListener(null);

        b1 = new Button("Add");
        b2 = new Button("Sub");
        b3 = new Button("Mul");
        b4 = new Button("Div");

        t1 =new TextField();
        t2 =new TextField();
        lobj = new Label();

        b1.setBounds(10,280,80,40);
        b1.setBounds(100,280,80,40);
        b1.setBounds(190,280,80,40);
        b1.setBounds(290,280,80,40);

        t1.setBounds(70, 100,100,40);
        t2.setBounds(220, 100,100,40);

       
        lobj.setBounds(150,200,200,100);

        mainFrame.add(b1);
        mainFrame.add(b2);
        mainFrame.add(b3);
        mainFrame.add(b4);
        
        mainFrame.add(t1);
        mainFrame.add(t2);
        mainFrame.add(lobj);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);

        // lobj.setText("Hello World..");
        mainFrame.setLayout(null);
        mainFrame.setVisible(true);
    }
    public void WindowClosing(WindowEvent wobj)
    {
        System.exit(0);
    }
    public void actionPerformed(ActionEvent aobj){
        try
        {
            no1 = Integer.parseInt(t1.getText());
            no2 =Integer.parseInt(t2.getText());
            if(aobj.getSource() == b1)
            {
                lobj.setText("Additon is : "+(no1+no2)) ;
            } 
            if(aobj.getSource() == b2)
            {
                lobj.setText("Subtraction is is : "+(no1-no2)) ;
            } 
            if(aobj.getSource() == b3)
            {
                lobj.setText("Multiplication is : "+(no1*no2)) ;
            } 
            if(aobj.getSource() == b4)
            {
                lobj.setText("Multiplication is : "+(no1/no2)) ;
            } 
        }
        catch(Exception eobj)
        {}
    }
}
class MarvellousCalculator 
{
    public static void main(String A[])
    {
        Calculator cobj = new Calculator(400,400, "Marvellous Calculator");

    }
}