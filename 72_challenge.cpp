#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> numbers = {20,30,40};
    numbers.push_front(10);
    numbers.push_back(50);
   

    numbers.pop_front();
    numbers.pop_back();

     cout<<"list: ";

    for(int x : numbers){
        cout<<x<<" ";
    }

    cout<<endl;
   



    cout<<"size: "<<numbers.size()<<endl;
    return 0;
}