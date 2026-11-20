#include <iostream>
using namespace std;

class multiplier{
    public:
    int multiply(int a, int b){
            return a*b;
        }
    int multiply(int a, int b, int c){
            return a*b*c;
     
        }
};
int main() {
    multiplier mult;
    cout<<mult.multiply(5, 10)<<endl;
    cout<<mult.multiply(5, 10, 15)<<endl;
    
    return 0;
}