class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res1, res2;
        set<int> numSet1(begin(nums1), end(nums1)), numSet2(begin(nums2), end(nums2));

        set_difference(begin(numSet1), end(numSet1), begin(numSet2), end(numSet2), back_inserter(res1));
        set_difference(begin(numSet2), end(numSet2), begin(numSet1), end(numSet1), back_inserter(res2));

        return {res1, res2};
    }
};