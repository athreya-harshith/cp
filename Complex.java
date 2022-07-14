import java.util.*;
class Complex
{
    private int r,i;
    public Complex()
    {
        r=0;
        i=0;
    }
    public Complex(int r,int i)
    {
        this.r=r;
        this.i=i;
    }
    public void accept()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Values for r and i");
        r=sc.nextInt();
        i=sc.nextInt();
        sc.close();
    }
    public void display()
    {
        System.out.println("The Object contents are");
        System.out.println("r = "+r+" i = "+i);
    }
    public static void obj_create()
    {
        Complex c1=new Complex();
        Complex c2=new Complex(3,4);
        Complex c3=new Complex();
        c1.accept();
        c3.add(c1,c2);
        System.out.println("After the addition");
        c3.display();
        Complex c4=c1.add(c2);
        c4.display();
    }
    public void add(Complex c1,Complex c2)
    {
        r=c1.r+c2.r;
        i=c1.i+c2.i;
    }
    public Complex add(Complex p)
    {
        Complex t=new Complex();
        t.r=r+p.r;
        t.i=i+p.i;
        return t;
    }
    public static void main(String[] args)
    {
        Complex.obj_create();
    }
}
