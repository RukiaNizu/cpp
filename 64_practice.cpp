#include <iostream>
using namespace std;
template <class T>
T findBiggest(T a, T b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
int main() {
    cout<<"Biggest integer: "<<findBiggest(10,20)<<endl;
    cout<<"Biggest float: "<<findBiggest(10.2,20.5)<<endl;
    return 0;
}