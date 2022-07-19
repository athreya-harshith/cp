import java.util.*;
class comp
{
    int r,i;
    public String toString()// over-ridden function from supreme class Object
    {
        String t;
       // t=r;
        t=r+" + i"+i;
        return t;//OUTPUT 0 + i0 After Over-iding
    }
}

class Fun_overide_comp
{
    public static void main(String[] args)
    {
        comp a= new comp();
        System.out.println(a);// OUTPUT - (HEX CODE) comp@7ad041f3 before Over-riding
    }
}