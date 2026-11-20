#include <iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base class constructor called"<<endl;
    }
};

class derived :public base{
    public:
    derived(){
        cout<<"Derived class constructor called"<<endl;
    }
};
int main() {
    derived d;
    return 0;
}