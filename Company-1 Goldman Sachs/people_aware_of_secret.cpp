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
int mod1 = 1e9+7;
    int solve(int remDays, int daysToTell, int delay, int forget, vector<vector<int>> &dp){
        if(remDays <= 0){
            return 0;
        }
        if(daysToTell == forget){
            return -1;
        }
        if(dp[remDays][daysToTell] != -2){
            return dp[remDays][daysToTell];
        }
        return dp[remDays][daysToTell] = (1+(solve(remDays-1, daysToTell+1, delay, forget, dp)%mod1+solve(remDays-delay, delay, delay, forget, dp)%mod1)%mod1)%mod1;
        
    }
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long long> days(n+1, 0);
        days[1] = 1;
        long long noOfPeopleSharesSecret = 0;
        for(int day = 2; day <= n; day++){
            long long numberOfNewPeopleSharesSecret = days[max(0, day-delay)];
            long long numberOfPeopleForgettingSecret = days[max(0, day-forget)];
            noOfPeopleSharesSecret = ((noOfPeopleSharesSecret+numberOfNewPeopleSharesSecret)%mod1-numberOfPeopleForgettingSecret +mod1)%mod1;
            days[day] = noOfPeopleSharesSecret%mod1;
        }
        long long res = 0;
        for(int i = n-forget+1; i <= n; i++){
            res = (res+days[i])%mod1;
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
