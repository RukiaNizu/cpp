#include<iostream>
using namespace std;

class Parent{
    public:
    int publicData=10;
    protected:
    int protectedData=20;
    private:
    int privateData=30;

}; 
class Child:public Parent{
    public:
    void show(){
        cout<<"public:"<<publicData<<endl;
        cout<<"protected:"<<protectedData<<endl;
        //cant be access private data
    }
} ;
int main(){
    Child c;
    c.show();
    return 0;
}

