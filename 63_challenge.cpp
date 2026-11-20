#include <iostream>
using namespace std;
template <class T>
T multiply(T a, T b){
    return a*b;
}
int main() {
    cout<<"Integer product: "<<multiply(2,25)<<endl;
    cout<<"Decimal product: "<<multiply(10.2,20.5)<<endl;
    return 0;
}