// 118. Pascal's Triangle
// Easy
// Topics
// premium lock icon
// Companies
// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:




class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1;i<=numRows ;i++){
            ans.push_back(vector<int>(i,1));    
        }
        //Fill thepascals traingle 
        for(int i = 0;i<ans.size();i++){
            for(int j = 1; j<ans[i].size()-1;j++){
                
                    ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};
