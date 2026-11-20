#include<iostream>
using namespace std;

int moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}


int main(){
    cout<<moneyReceived(1000)<<endl;
    cout<<moneyReceived(1000,1.5)<<endl;

    return 0;
}