#include <iostream>
using namespace std;

class calculator{
    public:
    int add(int a, int b){
            return a+b;
        }
    int add(int a, int b, int c){
            return a+b+c;
     
        }
};
int main() {
    calculator calc;

    cout<<calc.add(5, 10)<<endl;
    cout<<calc.add(5, 10, 15)<<endl;
    
    return 0;
}