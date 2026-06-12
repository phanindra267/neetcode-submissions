class Solution {
public:
vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(0,{},nums);
        return res;
    }
    void dfs(int i,vector<int> subset,vector<int> nums)
    {
        res.push_back(subset);
        for(int j=i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[j-1])
            continue;
            subset.push_back(nums[j]);
            dfs(j+1,subset,nums);
            subset.pop_back();

        }
    }
};
