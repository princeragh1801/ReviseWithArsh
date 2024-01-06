#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void solve(int ele, int k, int rem, vector<int> &curr, vector<vector<int>> &res){
        // if we can't take any element and rem is zero that means we got a result
        if(k == 0 && rem == 0){
            res.push_back(curr);
            return;
        }
        // we are unable to find combinations
        if(ele == 0 || k == 0){
            return;
        }
        // skipping the current element
        solve(ele-1, k, rem, curr, res);
        // taking the current elemnent
        if(ele <= rem){
            curr.push_back(ele);
            solve(ele-1, k-1, rem-ele, curr, res);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> curr;
        solve(9, k, n, curr, res);
        return res;
    }
};
