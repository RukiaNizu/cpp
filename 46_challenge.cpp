#include <iostream>
using namespace std;
class person{
    public:
    person(){
        cout<<"Person class constructor called"<<endl;
    }
};

class student:public person{
    public:
    student(){
        cout<<"Student class constructor called"<<endl;
    }
};
int main() {
    student s;
    return 0;
}