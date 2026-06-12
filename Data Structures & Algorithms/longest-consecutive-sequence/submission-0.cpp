class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int res=0;
        unordered_set<int> store(nums.begin(),nums.end());
        for(int nums:nums)
        {
            int streak=0;
            int curr=nums;
            while(store.find(curr)!=store.end())
            {
                streak++;
                curr++;

            }
            res=max(res,streak);
        }
        return res;
        
    }
};
