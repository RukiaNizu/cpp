#include <iostream>
using namespace std;

class student{
    protected:
    int roll;
    public:
    void setRoll(int r){
        roll=r;
    }
};

class Theory:virtual public student{
    protected:
    float english;
    float math;
    public:
    void setTheoryMarks(float e,float m){
        english=e;
        math=m;
    }
};

class Practical:virtual public student{
    protected:
    float programming;
    
    public:
    void setPracticalMarks(float p){
        programming=p;
      
    }
};
class Result:public Theory,public Practical{
    public:
    void showResult(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"English: "<<english<<endl;
        cout<<"Math: "<<math<<endl;
        cout<<"Programming: "<<programming<<endl;
        cout<<"Total: "<<english+math+programming<<endl;
    }
};
int main() {
    Result r;

    r.setRoll(25);
    r.setTheoryMarks(80, 90);
    r.setPracticalMarks(85);
    r.showResult();
    return 0;
}