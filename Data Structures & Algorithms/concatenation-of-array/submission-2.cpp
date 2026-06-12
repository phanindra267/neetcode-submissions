class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> a;
        int c=1;
        while(c<=2)
        {
        for(auto &p: nums)
        {
            a.push_back(p);
        }
        c++;
        }
        return a;
    }
};