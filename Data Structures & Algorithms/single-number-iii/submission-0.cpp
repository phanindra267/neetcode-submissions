class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> seen;
        for (int& num : nums) {
            if (seen.count(num)) {
                seen.erase(num);
            } else {
                seen.insert(num);
            }
        }

        return vector<int>(seen.begin(), seen.end());
    }
};