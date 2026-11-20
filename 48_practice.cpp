#include <iostream>
using namespace std;
class base{
    public:
    base(int n){
        cout<<"Base class constructor:"<<n<<endl;
    }
};
class derived:public base{
    public:
    derived(int y):base(y){
        cout<<"Derived class constructor:"<<y<<endl;
    }
};

int main() {
    derived d(5);
    return 0;
}