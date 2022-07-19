class complex
{
	private int r,i;
	public void display()
	{
		System.out.println("Display Function Call");
	}
}
class comp
{
	public static void main(String args[])
	{
		complex a;
		a=new complex();
		/*comp.java:14: error: variable a might not have been initialized*/

		a.display();//error 
		
	}
}
