import javax.swing.*;

class Frame extends JFrame
{
    Frame()
    {
        
        JLabel jl = new JLabel("Hello");
        JLabel jl2 = new JLabel("Welcome");
        add(jl);
        add(jl2);

        setVisible(true);
        setSize(400,400);
    }
}

class GUI11
{
    public static void main(String arg[])
    {
        Frame fobj = new Frame();
    }
}