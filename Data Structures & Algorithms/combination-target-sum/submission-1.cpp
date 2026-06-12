class Solution {
public:
    vector<vector<int>> res; // Line 1: stores all valid combinations

    vector<vector<int>> combinationSum(vector<int>& nums, int target) { // Line 2
        sort(nums.begin(), nums.end()); // Line 3: sort for early stopping
        dfs(0, {}, 0, nums, target);    // Line 4: start DFS from index 0
        return res;                     // Line 5: return all results
    }

    void dfs(int i, vector<int> cur, int total, vector<int>& nums, int target) { // Line 6
        if (total == target) {                   // Line 7: base case
            res.push_back(cur);                  // Line 8: add valid combination
            return;                              // Line 9: stop this path
        }

        for (int j = i; j < nums.size(); j++) {  // Line 10: loop through choices
            if (total + nums[j] > target) {      // Line 11: pruning
                return;                          // Line 12: stop early
            }
            cur.push_back(nums[j]);               // Line 13: add number to current
            dfs(j, cur, total + nums[j], nums, target); // Line 14: recurse (allow reuse)
            cur.pop_back();                       // Line 15: backtrack
        }
    }
};
