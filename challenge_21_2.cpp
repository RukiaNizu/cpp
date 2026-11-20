#include <iostream>
using namespace std;

class Car{
    public:
    int speed;
}


int main() {
    Car car1;
    Car car2;
    
    car1.speed=100;
    car2.speed=200;

    cout<<car2.speed<<" "<<car1.speed<<endl;
    return 0;
}