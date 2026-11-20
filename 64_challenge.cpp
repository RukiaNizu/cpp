#include <iostream>
using namespace std;
template <class T>
T findSmallest(T a, T b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}
int main() {
    cout<<"Smallest integer: "<<findSmallest(10,20)<<endl;
    cout<<"Smallest float: "<<findSmallest(10.2,20.5)<<endl;
    return 0;
}