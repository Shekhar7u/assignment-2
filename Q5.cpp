#include <iostream>
#include <algorithm>
using namespace std;

int maximumProduct(int *nums, int size)
{

    sort(nums, nums + size);

    return max(nums[size - 1] * nums[size - 2] * nums[size - 3], nums[0] * nums[1] * nums[size - 1]);
}

int main()
{
    int nums[] = {1, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << maximumProduct(nums, size) << endl; 

    return 0;
}
