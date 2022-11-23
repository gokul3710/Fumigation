package def;

public class StaticNested {
    void hello(){
        System.out.println("HELLO");
    }
    static class K{
        void hi(){
            System.out.println("HI");
        }
    }
    class R{
        void hoi(){
            System.out.println("HOI");
        }
    }
    public static void main(String[] args) {
        StaticNested c = new StaticNested();
        StaticNested.R r = c.new R();
        StaticNested.K k= new StaticNested.K();

    }
}
