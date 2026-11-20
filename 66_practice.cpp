#include <iostream>
using namespace std;

template <class T=int>
class Number{
    public:
    T value;

    Number (T x){
        value=x;
    }

    void display(){
        cout<< "Value: " << value << endl;
    }

};
int main() {
  Number<> n1(100);
  n1.display();
  
  Number<double> n2(100.5);
  n2.display();
    return 0;
}