#include<iostream>
using namespace std;

int add(int a,int b=10){
    return a+b;

}

int main(){
    cout<<add(5);

    return 0;
}