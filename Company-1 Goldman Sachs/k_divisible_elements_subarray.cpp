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
    int countDistinct(vector<int>& nums, int k, int p) {
        unordered_set<vector<int> st;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int count = 0;
            vector<int> curr;
            for(int j = i; j < n; j++){
                curr.push_back(nums[j]);
                if(nums[j]%p == 0){
                    count++;
                }
                if(count > k){
                    break;
                }
                st.insert(curr);
            }
        }
        int res = st.size();
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
