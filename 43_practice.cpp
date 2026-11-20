#include <iostream>
using namespace std;

class father{
    public:
    void show(){
        cout<<"Father is showing"<<endl;
    }
};
class mother{
    public:
    void show(){
        cout<<"Mother is showing"<<endl;
    }
};

class child:public father,public mother{

};
int main() {
  child c;
  c.father::show();
  c.mother::show();  
    return 0;
}