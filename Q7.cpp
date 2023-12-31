#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
        if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << boolalpha << isMonotonic(nums) << endl; // Output: true

    return 0;
}
