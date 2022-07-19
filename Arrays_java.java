import java.util.*;
class Arrays_java
{
    int n;
    int a[];
    int[] a1={10,20,30,40};
    String b;
    char c[];
    Scanner sc;
    public void accept_integer_array()
    {
        sc=new Scanner(System.in);
        n=sc.nextInt();
        a=new int[n];
        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();
    }
    public void accept_string()
    {
        System.out.println("Enter the string");
        sc=new Scanner(System.in);
        c=new char[12];
        b=sc.next();
        for(int i=0;i<10;i++)
        {
            c[i]=b.charAt(0);
        }
    }
    public void display()
    {
        System.out.println("The Array Contents are");
        for(int i=0;i<a.length;i++)
            System.out.print(a[i]+" ");
        System.out.println();
        System.out.println("The String contents are");
        System.out.println(b);
        for(int i=0;i<c.length;i++)
            System.out.print(c[i]+" ");
    }
    public static void main(String[] args)
    {
        Arrays_java a=new Arrays_java();
        a.accept_integer_array();
        a.accept_string();
        a.display();
    }

}