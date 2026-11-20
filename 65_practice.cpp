#include<iostream>
using namespace std;

template<typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << "First Value: " << a <<endl;
    cout << "Second Value: " << b << endl;
}

int main() {
    display(5, 10.5);
    return 0;
}