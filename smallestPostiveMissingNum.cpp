#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int segregateArr (int arr[], int n) 
    { 
    	int j = 0, i; 
    	for(i = 0; i < n; i++) 
    	{ 
    	    if(arr[i] <= 0) 
    	    { 
    	        //changing the position of negative numbers and 0.
    	        swap(arr[i], arr[j]); 
    	        //incrementing count of non-positive integers.
    	        j++; 
    		} 
    	}
    	return j; 
    } 
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int shift = segregateArr(arr, n); 
        
        //shifting the array to access only positive part.
        //calling function to find result and returning it.
        return findMissingPositive(arr+shift, n-shift); 
        
            
    }
    int findMissingPositive(int arr[], int n){
         for(int i=0;i<n;i++){
             //if(arr[i]>n) continue;
             //if(arr[abs(arr[i])-1]<0) continue;
             if(abs(arr[i]) - 1 < n && arr[ abs(arr[i]) - 1] > 0) 
             arr[abs(arr[i])-1]*= -1;
         }
         for(int i=0;i<n;i++){
             if(arr[i]>0) return i+1;
         }
         return n+1;
    }
    
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends