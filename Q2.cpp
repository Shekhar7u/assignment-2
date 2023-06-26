#include <iostream>
#include <unordered_set>
#include <algorithm>
#include<vector>
using namespace std;

int distributeCandies(vector<int>& candyType) {
    unordered_set<int> uniqueCandies; // unordered_set to store unique candy types

    // Count the number of unique candy types
    for (int candy : candyType) {
        uniqueCandies.insert(candy);
    }

    // Calculate the maximum number of different types of candies Alice can eat
    int maxCandies = min(uniqueCandies.size(), candyType.size() / 2);

    return maxCandies;
}

int main() {
    vector<int> candyType = {1, 1, 2, 2, 3, 3,};
    cout << distributeCandies(candyType) << endl; // Output: 3

    return 0;
}
