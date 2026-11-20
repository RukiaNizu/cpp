#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {80, 65, 90, 75, 85};
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}