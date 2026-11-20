#include <iostream>
using namespace std;

void show(int a){
    cout<<a<<endl;
}

void show(double a){
    cout<<a<<endl;
}
int main() {
    show(10);
    show(5.5);
    return 0;
}