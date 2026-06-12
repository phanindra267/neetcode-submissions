class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int res = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    res++;
                }
            }
        }
        return res;
    }

    bool isPrefixAndSuffix(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) return false;
        }

        int j = 0;
        for (int i = s2.size() - s1.size(); i < s2.size(); i++) {
            if (s1[j] != s2[i]) return false;
            j++;
        }

        return true;
    }
};