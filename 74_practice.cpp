#include<iostream>
using namespace std;

class Multiply{
    public:
    int operator()(int a, int b){
        return a * b;
    }
};

int main(){
    Multiply obj;
    cout << obj(5, 3) << endl;
    cout<<obj(20,30)<<endl;  // Calls the overloaded operator()
    return 0;
}
