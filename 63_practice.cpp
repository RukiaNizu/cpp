#include<iostream>
using namespace std;
template <class T>
T add(T a, T b){
    return a+b;
}

int main(){
    cout<<"Integer sum: "<<add(10,20)<<endl;
    cout<<"Float sum: "<<add(10.2,20.5)<<endl;
    return 0;
}