#include <iostream>
using namespace std;


template <class T1, class T2>
void calculate(T1 a, T2 b) {
    cout << "Sum: " << a + b << endl;
    
}

int main() {
    calculate(5, 10);
    calculate(3.5, 2.5);
    return 0;
}