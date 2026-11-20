#include<iostream>
using namespace std;
class Car{
    private:
    string brand;
    
    public:
    Car(string b){
        brand=b;

    }
     void display(){
        cout<<"brand: "<<brand<<endl;
    }
    ~Car(){
        cout<<"Car object destroyed"<<endl;
    }
};
int main(){
    Car c1("Toyota");
   
    c1.display();

    return 0;

}

