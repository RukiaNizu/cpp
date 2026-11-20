#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> numbers = {80, 65, 90, 75, 85};
    numbers.push_front(95);
    numbers.push_back(100);
    cout<<"list: ";

    for(int x : numbers){
        cout<<x<<" ";
    }

    cout<<endl;

    numbers.pop_front();
    numbers.pop_back();

    cout<<"After removing:"<<endl;

    for(int x: numbers){
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"size: "<<numbers.size()<<endl;
    return 0;
}