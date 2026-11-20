#include <iostream>
using namespace std;

class demo{
    public:
    void a(){
        cout<<"a";
    }
    void b(){
        a();
        cout<<" b";
    }
    void c(){
        b();
        cout<<" c";
    }
};

int main() {
    demo d;
    d.c();  
    return 0;
}