//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int maxReachable = arr[0]; // Represents the maximum reachable index
    int steps = arr[0]; // Represents the remaining steps from the current position
    int jumps = 1; // Represents the number of jumps made so far
    
    if (n == 1) return 0; // If there's only one element in the array, no jumps are needed
    if (arr[0] == 0) return -1; // If the first element is 0, no progress can be made
    
    for (int i = 1; i < n; i++) {
        if (i == n - 1) return jumps; // If reached the end of the array, return the number of jumps
        
        maxReachable = max(maxReachable, i + arr[i]); // Update the maximum reachable index
        
        steps--; // Decrement the remaining steps
        
        if (steps == 0) { // If no more steps left
            jumps++; // Make a jump
            if (i >= maxReachable) return -1; // If can't proceed further, return -1
            
            steps = maxReachable - i; // Update the remaining steps to reach the farthest reachable index
        }
    }
    
    return jumps;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends