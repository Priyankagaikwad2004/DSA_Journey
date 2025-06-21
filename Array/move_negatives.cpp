#include <iostream>
#include <vector>
using namespace std;

void moveNegatives(vector<int>& arr) {
    int j = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < 0) {
            if(i != j) swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {1, -2, 3, -4, 5, -6};
    moveNegatives(arr);
    for(int i : arr) cout << i << " ";
    return 0;
}
