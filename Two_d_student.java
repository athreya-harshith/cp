import java.util.*;
class Student
{
    private String name,usn;
    private static Scanner sc;
    public static void create_obj()
    {
        sc=new Scanner(System.in);
    }
    public void accept()
    {
        System.out.println("Enter the name");
        name=sc.nextLine();
        System.out.println("Enter the usn");
        usn=sc.next();
        sc.nextLine();
    }
    public void display()
    {
        System.out.print("Name : "+name+"\t USN :  "+usn);
    }
}
class Two_d_student
{
    public static void main(String[] args)
    {
        Student.create_obj();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        Student[][] a = new Student[m][n];
        for(int i=0;i<a.length;i++)
            for(int j=0;j<a[i].length;j++)
                a[i][j]=new Student();
        for(int i=0;i<a.length;i++)
            for(int j=0;j<a[i].length;j++)
                a[i][j].accept();
        for(int i=0;i<a.length;i++)
        {
            for(int j=0;j<a[i].length;j++)
            {
                a[i][j].display();
                System.out.print("\t");
            }
              System.out.println();  
        }
            
    }
}