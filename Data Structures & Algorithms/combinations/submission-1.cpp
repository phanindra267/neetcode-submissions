class Solution {
public:
vector<vector<int>> res;
    vector<vector<int>> combine(int n, int k) {
       vector<int> comb;
       bt(1,n,k,comb);
       return res; 
    }
    private:
    void bt(int i,int n,int k, vector<int>& comb)
    {
        if(i>n) 
        {
            if(comb.size()==k)
            {
                res.push_back(comb);
            }
            return;
        }
        comb.push_back(i);
        bt(i+1,n,k,comb);
        comb.pop_back();
        bt(i+1,n,k,comb);
    }

};