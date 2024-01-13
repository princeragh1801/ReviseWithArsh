#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size(), m = img[0].size();
        vector<vector<int>> res(n, vector<int>(m, 0));
        int dr[3] = {-1, 0, 1};
        int dc[3] = {-1, 0, 1};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int sum = 0, ele = 0;
                for(int r = 0; r < 3; r++){
                    for(int c = 0; c < 3; c++){
                        int row = i+dr[r], col =  j+dc[c];
                        if(row >= 0 && row < n && col >= 0 && col < m){
                            ele++;
                            sum+=img[row][col];
                        }
                    }
                }
                res[i][j] = sum/ele;
            }
        }
        return res;
    }
};