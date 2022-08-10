// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        //code here
        int rep, count = 0,low = 0, high = n-1;
        count = n-(arr[n-1]-arr[0]);
        if(count == 1) return {-1,-1};
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] == arr[mid-1] || arr[mid] == arr[mid+1])
            return {arr[mid], count};
            //else if(mid-(arr[mid]-arr[low]) == 0) low = mid+1;
            else if(arr[mid]>=mid+arr[0]) low = mid+1;
            else high = mid-1;
        }
        
        
        
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<int, int> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}  // } Driver Code Ends
