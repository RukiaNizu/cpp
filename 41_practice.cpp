#include <iostream>
using namespace std;

class father{
    public:
    void work(){
        cout<<"father is working"<<endl;
    }
};

class mother{
    public:
    void cook(){
        cout<<"mother is cooking"<<endl;


    }
};

class child:public father ,public mother{
    public:
    void play(){
        cout<<"child is playing"<<endl;
    }
};


int main() {
    child c;
    c.work();
    c.cook();
    c.play();
    
    return 0;
}