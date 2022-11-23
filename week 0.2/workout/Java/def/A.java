package def;

import interfac.*;

public class A extends B implements Infa, Infb {
    public static void main(String[] args) {
        A c = new A();
        c.a();
        c.b();
        c.c();
        c.hi();
    }

    @Override
    public void a() {
        System.out.println("A");

    }

    @Override
    public void b() {
        System.out.println("B");
    }

    @Override
    public void c() {
        System.out.println("C");
    }

}
