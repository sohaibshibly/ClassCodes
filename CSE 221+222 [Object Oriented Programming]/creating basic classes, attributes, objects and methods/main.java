public class main {
    public static void main(String[] args)
    {
        student obj=new student();
        obj.storeinfo("Shibly","213-15-4258",3.33);
        obj.display();
        System.out.println();
    }
}

///////////////////////////////////////////////////////////////////////////////


class student {
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
