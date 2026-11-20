#include <iostream>
using namespace std;
class student{
    public:
    int rollnumber;
    void showRollNumber(){
        cout << "Roll Number: " << rollnumber << endl;
    }
};

class test:virtual public student{
    public:
    int marks;
    void showMarks(){
        cout << "Marks: " << marks << endl;
    }
};
class sports:virtual public student{
    public:
    int scors;
    void showScores(){
        cout << "Scores: " << scors << endl;
    }
};

class result:public test,public sports{
    public:
    void showResult(){
        cout<<"Result is calculated"<<endl;
    }
};
int main() {
    result r;

    r.rollnumber = 123;
    r.marks = 95;
    r.scors = 10;

    r.showRollNumber();
    r.showMarks();
    r.showScores();
    r.showResult();

    return 0;
}