//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string s1, string s2) {
        // code here
        int i=0,j=0,f=0;
        string s="";
        for(i=0;i<s1.length();i++){
            f=0;
            for(j=0;j<s2.length();j++){
                if(s1[i]==s2[j]){
                    f=1;
                    break;
                }
            }
            if(f==0){
                s+=s1[i];
            }
        }
        return s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends