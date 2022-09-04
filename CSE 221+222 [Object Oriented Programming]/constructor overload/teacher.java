public class teacher {
    String name,dept;
    int age;
    teacher()
    {
        System.out.println("Default constructor called.");
    }
    teacher(String n, String d, int a) {
        name=n;
        dept=d;
        age=a;
    }
    teacher(String n, String d) {
        name=n;
        dept=d;
    }
    void display()
    {
        System.out.println("Name\t\t:"+name);
        System.out.println("Department\t:"+dept);
        System.out.println("Age\t\t\t:"+age);
        System.out.println();
    }
}
