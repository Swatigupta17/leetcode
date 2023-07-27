//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    void reverse(string& s){
        int i=0,j=s.length()-1;
        for(;i<=j;i++,j--){
            swap(s[i],s[j]);
        }
    }
    string reverseWords(string S) 
    { 
        // code here 
        int i=S.length()-1;
        string str="",s="";
        for(;i>=0;i--){
           
             if(S[i]=='.'){
                 reverse(str);
                 s+=str;
                 s+='.';
                 str="";
             }
             else{
             str+=S[i];
             }
        }
         reverse(str);
        s+=str;
        return s;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends