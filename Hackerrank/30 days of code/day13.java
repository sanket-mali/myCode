//Write MyBook Class
class MyBook extends Book{
    private int price;
    MyBook(String t,String a,int p){
        super(t,a);
        price=p;
    }
    void display(){
        System.out.println("Title: "+this.title);
        System.out.println("Author: "+this.author);
        System.out.println("Price: "+this.price);
    }
}

