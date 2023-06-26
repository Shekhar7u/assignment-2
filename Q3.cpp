#include <iostream>
#include <unordered_map>
using namespace std;

int findLHS(int nums[], int n)
{
    unordered_map<int, int> freq;

    // Count the frequency of each number
    for (int i = 0; i < n; i++)
    {
        freq[nums[i]]++;
    }

    int longestSubsequence = 0;

    // Iterate through each number in the array
    for (int i = 0; i < n; i++)
    {
        int num = nums[i];

        if (freq.find(num + 1) != freq.end())
        {
            int subsequenceLength = freq[num] + freq[num + 1];
            longestSubsequence = max(longestSubsequence, subsequenceLength);
        }
    }

    return longestSubsequence;
}

int main()
{
    int nums[] = {1, 3, 2, 2, 5, 2, 3, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << findLHS(nums, n) << endl;

    return 0;
}
