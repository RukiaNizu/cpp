#include <iostream>
using namespace std;


class person{
    public:
    void introduce(){
        cout<<"I am a person"<<endl;
    }
};

class employee:public person{
    public:
    void work(){
        cout<<"emloyee is working"<<endl;
    }
};

class manager:public employee{
    public:
    void manage(){
        cout<<"manager is managing"<<endl;
    }
};
int main() {
    
    manager m;
    m.introduce();
    m.work();
    m.manage();
    return 0;
}