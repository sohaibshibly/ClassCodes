public class test {

   public static void main(String[] args) {
	   Student.display();
   }
}

///////////////////////////////////////////////////////////////////////////

class Student {
	static int id;
	static String name;
	static void display()
	{
		System.out.println("ID :"+id);
		System.out.println("Name :"+name);
	}
	static //static blocks are searched first // also needed to assign value to static variable
	{
		id=123;
		name="Shibly";
		System.out.println("Hello all");
	}
}

