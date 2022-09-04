public class test {

	public static void main(String[] args) {
		Student ob=new Student();
		ob.show(); //for non-static method object needs to be created first
		Student.display(); //static metods can be directly called with class
	}
}
