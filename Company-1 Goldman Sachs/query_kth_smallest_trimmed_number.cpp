#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
      // for storing the result of each query
      vector<int> res;
        for(auto it : queries){
          int kthSmallest = it[0], remDigitsAfterTrim = it[1];
          // for storing the array after trim with index
          vector<pair<string, int>> arr;
          for(int ind = 0; ind < nums.size(); ind++){
            string curr = "";
            int len = nums[ind].length();
            // generating the trimmed string
            for(int i = len-remDigitsAfterTrim; i < len; i++){
              curr += nums[ind][i];
            }
            arr.push_back({curr, ind});
          }
          sort(arr.begin(), arr.end());
          // getting the index
          int index = arr[kthSmallest-1].second;
          res.push_back(index);
        }
        return res;
    }
};
