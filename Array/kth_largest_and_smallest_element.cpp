#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    sort(arr.begin(), arr.end());
    cout << k << "th Smallest: " << arr[k - 1] << endl;
    cout << k << "th Largest: " << arr[arr.size() - k] << endl;
    return 0;
}
