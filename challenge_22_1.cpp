#include <iostream>
using namespace std;

class demo{
    public:
    void hello(){
        cout<<"hello";

    }
    void world(){
        hello();
        cout<<" world";
    }
};

int main() {
    demo d;
    d.world();
    return 0;
}