import java.util.Scanner;
public class AddTwoInt {
    public static void main(String[]args)
    {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter name: ");
        String a= input.next();
        System.out.println("Enter age: ");
        int b= input.nextInt();
        System.out.println("Enter cgpa: ");
        double c= input.nextDouble();
        input.nextLine();
        System.out.println("Enter dept: ");
        String d= input.nextLine();
        System.out.println("Name: "+a);
        System.out.println("age: "+b);
        System.out.println("cgpa: "+c);
        System.out.println("dept: "+d);

    }
}
