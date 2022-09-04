
public class student {
    String name;
    String id;
    double cgpa;
    void storeinfo(String n, String i, double c)
    {
        name=n;
        id=i;
        cgpa=c;
    }
    void display()
    {
        System.out.println(name);
        System.out.println(id);
        System.out.println(cgpa);
    }

}
