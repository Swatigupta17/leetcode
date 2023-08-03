//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
    stack<char>st;
    if(s.length()%2==1){
        return -1;
    }
    int i=0;
    for(;i<s.length();i++){
        if(s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if((!st.empty())&&(st.top()=='{')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
     int a=0,b=0;
    while(!st.empty()){
        if(st.top()=='{'){
            a++;
            st.pop();
        }
        else{
            b++;
            st.pop();
        }
    }
    return (a+1)/2+(b+1)/2;
   
}