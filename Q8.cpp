#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minScore(vector<int> &nums, int k)
{
    int n = nums.size();
    sort(nums.begin(), nums.end()); // Sort the array in ascending order

    int minScore = nums[n - 1] - nums[0]; // Initialize minScore with the maximum possible difference

    for (int i = 1; i < n; i++)
    {
        int minValue = min(nums[0] + k, nums[i] - k);
        int maxValue = max(nums[i - 1] + k, nums[n - 1] - k);
        minScore = min(minScore, maxValue - minValue);
    }

    return minScore;
}

int main()
{
    vector<int> nums = {1};
    int k = 0;
    cout << minScore(nums, k) << endl;

    return 0;
}
