//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> neg;
	    vector<int> pos;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0) neg.push_back(arr[i]);
	        else pos.push_back(arr[i]);
	    }
	    int count = 0, l = 0, p = 0, i = 0;
	    bool flag = true;
	    while(i<n){
	        if(flag == true && p<pos.size())
	            arr[i++] = pos[p++];
	        else if(flag == false && l<neg.size())
	            arr[i++] = neg[l++];
	       flag = !flag;
	            
	    }
	    
	    
	    
	    
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
