//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int> v;
        
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
            if(q.size()>k)
            {
                q.pop();
            }
        }
        while(q.size()>0)
        {
            v.push_back(q.top());
            q.pop();
        }
        sort(v.rbegin(),v.rend());
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends