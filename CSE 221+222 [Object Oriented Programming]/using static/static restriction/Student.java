public class Student {

	int a=5;
	static int b=8;
	void show() { //non-static methods can be used with both static and non-static elements
		display();
		System.out.println("Non-Static Method");
		System.out.println(a);
		System.out.println(b);
	}
	static void display() { //can not add anything non-staic i.e can't print the value of a here.
		System.out.println("Static Method");
		System.out.println(b);
	}
}
