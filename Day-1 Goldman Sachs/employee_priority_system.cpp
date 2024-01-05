#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, a, b) for(int i = a; i < b; i++)
#define mod 1000000007
#define beg(x) x.begin(), x.end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x);cerr<<endl;
#else
#define debug(x)
#endif
void _print(int a){cerr<<a;}
void _print(float a){cerr<<a;}
void _print(double a){cerr<<a;}
void _print(ll a){cerr<<a;}
void _print(char a){cerr<<a;}
void _print(bool a){cerr<<a;}
void _print(string a){cerr<<a;}
template<class T> void _print(vector<T> v){cerr<<"[ ";for(T it : v){_print(it);cerr<<" ";}cerr<<"]";}
template<class T> void _print(set<T> s){cerr<<"[ ";for(T it : s){_print(it);cerr<<" ";}cerr<<"]";}
template<class T> void _print(unordered_set<T> s){cerr<<"[ ";for(T it:s){_print(it);cerr<<" ";}cerr<<"]";}
ll gcd(ll a, ll b){return b ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b){ll g = gcd(a,b);return (a*b)/g;}
ll extendedGcd(ll a, ll b, ll x, ll y){if(a == 0){x = 0;y = 1;return b;}int x1, y1;return extendedGcd(b, a%b, x1, y1);}
/*********************** prince1801 ************************/

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


void _solve(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(auto &it : arr){
    cin>>it;
  }
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("error.txt", "w", stderr);
  freopen("output.txt", "w", stdout);
  #endif
  int test_case_ = 1;
  cin>>test_case_;
  while(test_case_--){ _solve(); }
  return 0;
}
