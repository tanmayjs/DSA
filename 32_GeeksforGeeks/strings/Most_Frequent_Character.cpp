// Most Frequent Character
// Difficulty: EasyAccuracy: 53.55%Submissions: 153K+Points: 2Average Time: 30m
// Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. If more than one character occurs the maximum number of times then print the lexicographically smaller character.

class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        vector<int> freq(26, 0);

        // Count frequencies of each character
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int mxFreq = 0;
        char result = 'a';

        // Iterate 0 to 25 to naturally handle lexicographical tie-breaking
        for (int i = 0; i < 26; i++) {
            if (freq[i] > mxFreq) {
                mxFreq = freq[i];
                result = (char)(i + 'a');
            }
        }

        return result;
    }
};
