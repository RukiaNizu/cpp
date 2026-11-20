#include <iostream>
using namespace std;


class Display{
    public:
    template<class T>
    void display(T value){
        cout << value << endl;
    }
};


template<class T>

void show(T a){
    cout<<"one value:"<<a<<endl;

}

template<class T>

void show(T a, T b){
    cout<<"two values:"<<a<<","<<b<<endl;
}
int main() {

    Display d;
    d.display(5);
    d.display(3.14);

    show(10);
    show(20, 30);
    
    return 0;
}