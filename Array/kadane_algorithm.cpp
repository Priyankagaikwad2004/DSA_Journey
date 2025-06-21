#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(vector<int>& arr) {
    int maxSum = arr[0], currentSum = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArraySum(arr) << endl;
    return 0;
}
