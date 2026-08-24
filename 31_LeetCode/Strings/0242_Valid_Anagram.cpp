// 242. Valid Anagram
// Easy
// Topics
// premium lock icon
// Companies
// Given two strings s and t, return true if t is an anagram of s, and false
// otherwise.
class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
    }
};
