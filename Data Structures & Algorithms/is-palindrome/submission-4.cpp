class Solution {
public:
    bool isPalindrome(string s) {
        string newstr = "";

        // keep only alphanumeric and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                newstr += tolower(c);
            }
        }

        // check palindrome
        string rev = newstr;
        reverse(rev.begin(), rev.end());

        return rev == newstr;
    }
};
