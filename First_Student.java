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
        System.out.println("Name : "+name+"\t USN :  "+usn);
    }
}
class First_Student
{
    public static void main(String[] args)
    {
        Student.create_obj();
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the number of students");
        n=sc.nextInt();
        Student[] a=new Student[n];
        System.out.println("Enter the n Student Details");
        for(int i=0;i<n;i++)
            a[i]=new Student();
        System.out.println("Enter the Student Details");
        for(int i=0;i<a.length;i++)
            a[i].accept();
        System.out.println("The Student Details are");
        for(int i=0;i<a.length;i++)
            a[i].display();
    }
}