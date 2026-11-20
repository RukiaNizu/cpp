#include <iostream>
using namespace std;
class Animal{
    public:
   int age=5;

   void displayAge(){
       cout<<"Age: "<<age<<endl;
    }
};
class Dog: public Animal{
    public:
    int weight=12;
  
   
    }
;
int main() {
  
    Animal *ptr;
    Dog d;
    ptr=&d;

    ptr->displayAge();
    return 0;
}