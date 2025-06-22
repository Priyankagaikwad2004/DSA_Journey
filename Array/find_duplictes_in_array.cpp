#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> v;

        // Count frequencies
        for (int i : arr) {
            mp[i]++;
        }

        // Find elements with frequency > 1
        for (auto it : mp) {
            if (it.second > 1) {
                v.push_back(it.first);
            }
        }

        return v;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 2, 3, 2, 4, 5, 1};  // Sample input
    vector<int> duplicates = obj.findDuplicates(arr);

    cout << "Duplicates are: ";
    for (int x : duplicates) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
