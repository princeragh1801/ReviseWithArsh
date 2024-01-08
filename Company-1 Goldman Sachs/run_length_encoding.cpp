//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here
  string res = "";
    int st = 0, n = src.size();
    while(st < n){
        int end = st+1;
        int count = 1;
        while(end < n && src[end] == src[st]){
            end++;
            count++;
        }

        res += src[st];
        string temp = to_string(count);
        for(auto it : temp){
            res += it;
        }
        st = end;
    }
    return res;
}     
 
