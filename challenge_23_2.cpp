#include <iostream>
using namespace std;

class student{
    int id;
public:
void setId(int x){
    id=x;
}

void showId(){
    cout<<id<<endl;
}


};

int main() {
    student s1;
    student s2;

    s1.setId(101);
    s2.setId(102);
    s1.showId();        
    s2.showId();
    
    return 0;
}