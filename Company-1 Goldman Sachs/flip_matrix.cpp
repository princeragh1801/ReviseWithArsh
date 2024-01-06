#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<vector<int>> matrix;
public:
    Solution(int m, int n) {
        matrix.resize(m, vector<int>(n, 0));
    }
    
    vector<int> flip() {
        vector<int> res;
        bool flag =false;
        for(int row = 0; row < matrix.size(); row++){
            for(int col = 0; col < matrix[row].size(); col++){
                if(matrix[row][col] == 0){
                    res.push_back(row);
                    res.push_back(col);
                    matrix[row][col] = 1;
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        return res;
    }
    
    void reset() {
        for(auto it : matrix){
            fill(it.begin(), it.end(), 0);
        }
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */
