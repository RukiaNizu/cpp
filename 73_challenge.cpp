#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1] = "Apple";
    m[4] = "Banana";
    m[3] = "Cherry";

    
    for(auto x : m){
        cout<<"key: "<<x.first<<" value: "<<x.second<<endl;
    }

  
    return 0;
}