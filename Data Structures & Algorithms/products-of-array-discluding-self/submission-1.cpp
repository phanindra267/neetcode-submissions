class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> s;

        for(int i=0;i<nums.size();i++)
        {
            int prod=1;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j) continue;
                else prod*=nums[j];
            }
            s.push_back(prod);
        }
        return s;

    }
};
