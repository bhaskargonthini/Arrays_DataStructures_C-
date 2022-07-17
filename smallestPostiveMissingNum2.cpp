#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        
        sort(arr,arr+n);
       int count=1;
       for (int i=0;i<n;i++)
       {
           if (arr[i]==count)
           count++;
       }
       return count;
        /*int x = n-1, y = 0;
        while(x+y<n){
            if(arr[i]<0 || arr[i] == 0){
                arr[y] = arr[i];
                y++;
            }
            if(arr[i]>0){
                int temp = arr[x];
                arr[x] = arr[i];
                arr[i] = temp;
                x--;
                y++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0) arr[i]*= -1;
        }
         for(int i=0;i<n;i++){
             if(arr[i]>n) continue;
             if(arr[abs(arr[i])-1]<0) continue;
             arr[abs(arr[i])-1]*= -1;
         }
         for(int i=0;i<n;i++){
             if(arr[i]>0) return i+1;
         }
         return n+1;*/
         
            
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