//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr, arr+n, greater<int>());
        int count = 0;
        for(int i=0;i<n-2;i++){
            int large = arr[i];
            int l = i+1, r = n-1;
            while(l<r){
                if(arr[l]+arr[r]>large){
                    count+= r-l;
                    l++;
                }
                else r--;
            }
        }
        return count;
        
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends
