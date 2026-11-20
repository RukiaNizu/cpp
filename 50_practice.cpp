#include <iostream>
using namespace std;

int main() {
    int *p=new int(25);
    cout<<"value:"<<*p<<endl;

    *p=50;
    cout<<"updated value:"<<*p<<endl;

    delete p;
    p=nullptr;
    return 0;
}