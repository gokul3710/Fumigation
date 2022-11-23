package abs;

abstract class Abs{
    int a;
    Abs(int a){
        this.a = a;
        call();
    }

    void call(){
        display(a);
        hai();
    }

   abstract void display(int a);
    void hai(){
        System.out.println("HI");
    }

}