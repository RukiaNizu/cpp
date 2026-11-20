#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6);
    cout<<"After adding 6 to the vector: ";

for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    numbers.pop_back();
    cout<<"After removing the last element from the vector: ";

for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout<<"The size of the vector is: " << numbers.size() << endl;
    return 0;
}