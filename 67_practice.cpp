#include<iostream>
using namespace std;

template<class T1,class T2>
void show(T1 a, T2 b){
    cout<<"Name: "<<a<<endl;
    cout<<"Age: "<<b<<endl;
}
int main(){
    show("nick",25);
    show("john",30);
    return 0;
}