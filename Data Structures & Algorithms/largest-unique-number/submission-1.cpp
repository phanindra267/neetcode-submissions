class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
         unordered_map<int, int> frequencyMap;

for (int num : nums) {
            frequencyMap[num]++;
        }

        int largestUnique = -1;

        for (auto& pair : frequencyMap) {
             if (pair.second == 1 && pair.first > largestUnique) {
                largestUnique = pair.first;
            }
        }

        return largestUnique;
    }
};