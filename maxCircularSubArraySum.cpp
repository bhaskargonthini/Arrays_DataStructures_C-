#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadanes(int arr[], int num){
        int maxEnding = arr[0], res = arr[0];
        for(int i=1;i<num;i++){
            maxEnding = max(maxEnding+arr[i],arr[i]);
            res = max(maxEnding,res);
        }
        return res;
    }
    
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int maxNormal = kadanes(arr,num);
        //cout<<maxNormal<<endl;
        if(maxNormal<0)
        return maxNormal;
        int sum = 0;
        for(int i=0;i<num;i++){
            sum+= arr[i];
            arr[i] = -arr[i];
            
        }
        //cout<<sum<<endl;
        int maxCircular = sum+kadanes(arr,num);
        //cout<<maxCircular<<endl;
        return max(maxCircular,maxNormal);
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends