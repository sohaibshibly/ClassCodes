public class main {
    public static void main(String[]args)
    {
        test a=new test();
        System.out.println(a.square1());
        System.out.println(a.square2(5));
    }
}

////////////////////////////////////////////////////////

class test {
    int square1(){
        return 3*3;
    }
    int square2(int n){
        return n*n;
    }
}
