#include <iostream>
using namespace std;

int main() {
    int *p=new int(100);
    cout<<"value:"<<*p<<endl;

    *p=200;
    cout<<"updated value:"<<*p<<endl;

    delete p;
    p=nullptr;
    return 0;
}