#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int ind, string digits, string curr, vector<string> str, vector<string> &ans){
  if(ind == digits.length()){
    ans.push_back(curr);
    return;
  }
  int x = digits[ind] - '0';
  for(int i = 0; i < str[x].length(); i++){
    curr.push_back(str[x][i]);
    solve(ind+1, digits, curr, str, ans);
    curr.pop_back();
  }
}
vector<string> letterCombinations(string digits) {
  if(digits.length() == 0){
    return {};
  }
     vector<string> str(10);
     str[2] = "abc";
     str[3] = "def";
     str[4] = "ghi";
     str[5] = "jkl";
     str[6] = "mno";
     str[7] = "pqrs";
     str[8] = "tuv";
     str[9] = "wxyz";
    //  debug(str)
     vector<string> ans;
    solve(0, digits, "", str, ans);
    return ans;
}
};
