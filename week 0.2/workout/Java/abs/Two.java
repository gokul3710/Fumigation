package abs;

public class Two extends Main {
    int a;

    Two(int a) {
        super(a);
        this.a = a;
    }

    void hai(){
        System.out.println("Hoi");
    }

    void display(int a){
        System.out.println(a+a);
    }

    static public void main(String[] args) {
        Two t = new Two(10);
    }
}
