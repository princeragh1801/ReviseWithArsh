//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // We can solve this problem in different ways
        // i have solved this using swapping
        int i = 0;

        while(i < n){
            // here we are checking if current element is present at it's correct position or not after it got sort
            if(arr[i] != arr[arr[i]-1]){
                swap(arr[i], arr[arr[i]-1]);
            }else{
                i++;
            }
        }
        // checking if array elements are placed on their exact position or not
        for(int i = 0; i < n; i++){
            // it is the case where we find repeating element
            if(arr[i] != i+1){
                return {arr[i], i+1};
            }
        }
        return {-1, -1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends