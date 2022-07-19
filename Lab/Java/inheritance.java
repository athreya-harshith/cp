class base
{
	public void print()
	{
		System.out.println("Inside the Base Class");
	}
}
class drd extends base
{
	public void display()
	{
		System.out.println("Inside the Derived Class");
	}
}
class inheritance
{
	public static void main(String[] args)
	{
		System.out.println("in main Function");
		drd a=new drd();
		a.display();
		a.print();
	}
}
		
