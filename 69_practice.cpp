#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main() {
vector<int> vec = {5, 2, 9, 1, 5, 6};
sort(vec.begin(), vec.end());
for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
}
return 0;
}