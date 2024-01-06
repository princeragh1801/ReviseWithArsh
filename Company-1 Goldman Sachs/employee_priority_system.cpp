#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // time 0(length of string)
    // converting string to integer
    int convert(string str){
        int res = 0;
        for(auto it : str){
            int digit = it-'0';
            res = res*10+digit;
        }
        return res;
    }
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        // storing result in res
        vector<string> res;
        // sorting the access_times so they got sort according to the name
        sort(access_times.begin(), access_times.end());

        int ind = 0;
        int n = access_times.size();
        while(ind < n-2){
            int cnt = 1, itr = ind+1;
            // extacting the curr name
            string name = access_times[ind][0];
            // checking if the user is already in res or not
            if(!res.empty() && res.back() == name){
                ind++;
                continue;
            }
            
            // extracting the name of person at ind+2 for checking the high access basically
            string name2 = access_times[ind+2][0];

            // if name same that means the person has accessed >= 3 times
            if(name == name2){
                int time1 = convert(access_times[ind][1]);
                int time2 = convert(access_times[ind+2][1]);
                int diff = time2-time1;

                // if diff is less than 100 then it will be in our result
                if(diff < 100){
                    res.push_back(name);
                    ind += 2;
                }
            }
            ind++;
        }
        return res;
    }
};

