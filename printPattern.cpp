// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> pattern(int N){
        // code here
        vector<int> list;
        list.push_back(N);
        int temp = N;
        while(temp>0){
            list.push_back(temp-5);
            temp-= 5;
        }
        while(temp!= N){
            list.push_back(temp+5);
            temp+= 5;
        }
        return list;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends