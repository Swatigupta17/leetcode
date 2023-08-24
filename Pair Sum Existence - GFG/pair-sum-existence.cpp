//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int n, int sum);
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];  //array of size n
            
        for(int i = 0; i < n; i++)
            cin>>arr[i]; //Input the array
             
        int sum; 
        cin>>sum;
          
        cout<< sumExists(arr, n, sum) <<endl;    
            
	}
}
// } Driver Code Ends


//User function Template for C++

int sumExists(int nums[], int n, int target){
        sort(nums,nums+n);
        int i=0,sum=0,j=n-1;
        while(i<j){
            sum=0;
            sum=nums[i]+nums[j];
            if(sum>target){
                j--;
            }
            else if(sum==target){
                return 1;

            }
            else{
                i++;
            }
        }
        return 0;
    }
    
    //code here
    
    
    
