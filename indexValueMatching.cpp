#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int> result;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == i + 1) {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};

int main() {
    Solution obj;
    
    vector<int> arr = {15, 2, 45, 4, 7};
    vector<int> ans = obj.valueEqualToIndex(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
