#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> students;
    students[1] = "one";
    students[2] = "two";
    students[3] = "three";

    
    for(auto x : students){
        cout<<"Student ID: "<<x.first;
        cout<<" Name: "<<x.second<<endl;
    }

   
    return 0;
}