import java.util.Scanner;
public class AddTwoInt {
    public static void main(String[]args)
    {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter first number: ");
        double a= input.nextDouble();
        System.out.println("Enter second number: ");
        double b= input.nextDouble();
        System.out.println("Enter third number: ");
        double c= input.nextDouble();
        System.out.println("The product of three numbers: "+(a*b*c));

    }
}
