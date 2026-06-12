class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Single line IGM solution
        return unique(nums.begin(), nums.end()) - nums.begin();
    }
};