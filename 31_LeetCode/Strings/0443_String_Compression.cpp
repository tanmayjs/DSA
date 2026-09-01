

// 443. String Compression
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given an array of characters chars, compress it using the following
// algorithm:

// Begin with an empty string s. For each group of consecutive repeating
// characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be
// stored in the input character array chars. Note that group lengths that are
// 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the
// array.

// You must write an algorithm that uses only constant extra space.

// Note: The characters in the array beyond the returned length do not matter
// and should be ignored.

class Solution {
public:
    int compress(vector<char>& s) {
        string ans = "";
        int i = 0, j = 0;
        int n = s.size();
        while (j < n) {
            if (s[j] == s[i])
                j++;
            else {
                char len = j - i;
                ans.push_back(s[i]);
                if (len != 1)
                    ans += to_string(len);
                i = j;
            }
        }
        int len = j - i;
        ans.push_back(s[i]);
        if (len != 1)
            ans += to_string(len);
        i = j;
        vector<char> ans2(ans.size());
        for (int i = 0; i < ans.size(); i++) {
            ans2[i] = ans[i];
        }
        s = ans2;
        return s.size();
    }
};
