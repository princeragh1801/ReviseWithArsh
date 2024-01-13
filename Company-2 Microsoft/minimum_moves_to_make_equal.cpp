#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mid = 0;
        if(n%2){
            mid = nums[n/2];
        }else{
            mid = (nums[n/2 - 1]+nums[n/2])/2;
        }
        int moves = 0;
        for(auto it : nums){
            moves += abs(mid-it);
        }
        return moves;
    }
};