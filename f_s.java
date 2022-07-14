import java.util.*;
class f_s
{
    private int n;
    private int[] arr;
    private int first,second;
    public static Scanner sc;
    public f_s()
    {
        System.out.println("Enter the value of n");
        n=sc.nextInt();
        arr= new int[n];
        first=-9998;
        second=-9999;
        System.out.println("Array Created of size "+n);
    }
    public f_s(int n)
    {
        this.n=n;
        arr=new int[n];
        first=-9998;
        second=-9999;
        System.out.println("Array Created of size "+n);
    }
    public void accept()
    {
        System.out.println("Enter the Array Elements");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("Array elements inserted");
    }
    public void display()
    {
        System.out.println("The Array Contents are ");
        for(int i=0;i<arr.length;i++)
            System.out.print(arr[i]+" ");
        System.out.println();
        System.out.println("The First Greatest Element is "+first+"\nSecond largest element is "+second);
    }
    public void first_second()
    {
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>first)
            {
                second=first;
                first=arr[i];
            }
            if(arr[i]>second && arr[i]<first)
                second=arr[i];
        }
    }
    public static void main(String[] args)
    {
        sc=new Scanner(System.in);
        f_s a=new f_s();
        a.accept();
        a.display();
        a.first_second();
        a.display();
    }
}