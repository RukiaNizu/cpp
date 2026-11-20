#include <iostream>
using namespace std;
class Display{
    public:
    template<class T>
    void show(T value){
        cout << value << endl;
    }
};
template <class T>
void print(T a) {
    cout << a << endl;
}

int main() {
    
    return 0;
}