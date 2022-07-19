import java.util.*;
class shape
{
    public void area()
    {
        System.out.println("Nothing to calculate");
    }
}
class circle extends shape
{
    @Override
    public void area()//Over-ridden frunction 
    {
        System.out.println("Aera of circle");
    }
}
class Override
{
    public static void main(String[] args)
    {
        circle a=new circle();
        a.area();//compile time polymorphism
        shape b=new shape();
        b.area();//b is called base clas reference / generic reference
        b=new circle();
        b.area();//Run time polymorphism
    }
}