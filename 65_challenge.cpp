#include <iostream>
using namespace std;

template <class T1, class T2>
void display(T1 a, T2 b) {
    cout << "Name: " << a << endl;
    cout << "Age: " << b << endl;
}
int main() {
    display("nick", 25);
  

    return 0;
}