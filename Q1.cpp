#include <iostream>
#include <algorithm>
using namespace std;

int arrayPairSum(int nums[], int n) {
    sort(nums, nums + (2 * n)); // Sort the array

    int sum = 0;
    for (int i = 0; i < 2 * n; i += 2) {
        sum += nums[i]; // Sum the minimum value of each pair
    }

    return sum;
}

int main() {
    int nums[] = {1, 4, 3, 2};
    int n = sizeof(nums) / sizeof(nums[0]) / 2;
    cout << arrayPairSum(nums, n) << endl; // Output: 4

    return 0;
}
