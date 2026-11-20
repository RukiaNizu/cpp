#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void area()=0;
};

class Rectangle: public Shape{
    private:
    int length=5;
    int width=3;
    public:
    void area() override{
        cout<<"Area of Rectangle= "<<length*width<<endl;
    }
};
int main() {
    Rectangle r;
    r.area();
    return 0;
}