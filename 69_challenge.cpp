#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
    vector<int> vec = {50,15,35,5,25};
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}