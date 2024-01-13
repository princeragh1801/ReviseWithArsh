#include<bits/stdc++.h>
class Solution {
public:
    
int solve(vector<int> &nums, int k){
    if(k < 0){
        return 0;
    }
    int x = 0;
    int i = 0, j = 0, n = nums.size(), ans = 0;    
    while(i < n){
        if(nums[i]&1){
            x++;
        }
        while(x > k){
            if(nums[j]&1){
                x--;
            }
            j++;
        }
        ans += (i-j+1);
        i++;
    }
    return ans;
}
int numberOfSubarrays(vector<int>& nums, int k) {
   int ans = solve(nums, k)-solve(nums, k-1);
   return ans;
}
};