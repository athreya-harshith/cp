import java.util.*;
import java.io.File;
class File_input
{
    public static void main(String[] args)
    {
        Scanner sc=null;
        try {
            sc = new Scanner(new File("/Users/athreya_harshith/codes/object_orientation_class/inp.txt"));
        } 
        catch (Exception e) {
            //TODO: handle exception
        }
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
            System.out.println(sc.nextInt());
    }
}