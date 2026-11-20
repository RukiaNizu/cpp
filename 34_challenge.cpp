#include<iostream>
using namespace std;
class Book{
    private:
    string title;
    int price;
    public:
    Book(string t,int p){
        title=t;
        price=p;
    }
    Book(const Book & obj){
        title=obj.title;
        price=obj.price;
    }
    void display(){
        cout<<"title: "<<title<<endl;
        cout<<"price: "<<price<<endl;
    }
    };
int main(){
    Book b1("C++",500);
    Book b2(b1);

    b1.display();
    cout<<endl;
    b2.display();

    return 0;
}




