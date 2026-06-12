class Solution {
public:
vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        bt(nums,0);
        return res;
    }
    void bt(vector<int>& nums,int i)
    {
        if(i==nums.size()) {res.push_back(nums); return;}
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[j],nums[i]);
            bt(nums,i+1);
            swap(nums[j],nums[i]);
        }
    }
};
