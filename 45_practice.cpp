#include <iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void set_number(int r){
        roll_no=r;
    }
    void print_number(){
        cout<<"roll number: "<<roll_no<<endl;
    }
};

class test:virtual public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m,float p){
        maths=m;
        physics=p;
    }
    void print_marks(){
        cout<<"maths: "<<maths<<endl;
        cout<<"physics: "<<physics<<endl;
    }
};

class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float s){
        score=s;
    }
    void print_score(){
        cout<<"sports score: "<<score<<endl;
    }
};
class result:public test,public sports{
    public:
    void display_result(){
        cout<<"roll number: "<<roll_no<<endl;
        cout<<"maths: "<<maths<<endl;
        cout<<"physics: "<<physics<<endl;
        cout<<"sports score: "<<score<<endl;
        cout<<"total: "<<maths+physics+score<<endl;

    }
};
int main() {
  result r;
  
  r.set_marks(90, 80);
  r.set_number(101);
    r.set_score(85);

    r.display_result();

    return 0;
}