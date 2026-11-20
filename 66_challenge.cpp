#include <iostream>
using namespace std;

template <class T=int>
class Box {
    public:
    T item;

    Box(T x) {
        item = x;
    }

    void showitem() {
        cout << "Item: " << item << endl;
    }
};

int main() {
    Box<> b1(50);
    b1.showitem();

    Box<double> b2(15.75);
    b2.showitem();

    return 0;
}