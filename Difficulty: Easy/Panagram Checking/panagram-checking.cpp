//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++



class Solution {
  public:

    bool checkPangram(string s) {
        unordered_set<char> letters;

        // Iterate through the string
        for (char c : s) {
        
            if (c >= 'A' && c <= 'Z') {
                c = tolower(c);
            }
            
            
            if (c >= 'a' && c <= 'z') {
                letters.insert(c);
            }
        }


        return letters.size() == 26;
    }
};



//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends