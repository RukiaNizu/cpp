#include<iostream>
#include<vector>
using namespace std;

int main() {

vector<int> numbers = {80, 65, 90, 75, 85};

for(int i = 0; i < numbers.size(); i++) {
    cout <<"vector: " << numbers[i] << " ";
}
cout << endl;
numbers.push_back(95);
numbers.pop_back();

cout<<"size of the vector is: "<<numbers.size()<<endl;

cout<<"first element of the vector is: "<<numbers.front()<<endl;
cout<<"last element of the vector is: "<<numbers.back()<<endl;

return 0;
}
         

