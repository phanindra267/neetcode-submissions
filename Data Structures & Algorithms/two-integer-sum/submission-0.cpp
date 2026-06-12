#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // If the complement is found in the map, return the pair
            if (numToIndex.count(complement)) {
                return {numToIndex[complement], i};  // smaller index comes first
            }

            // Store the number with its index
            numToIndex[nums[i]] = i;
        }

        return {}; // No valid pair found (shouldn't happen as per constraints)
    }
};
