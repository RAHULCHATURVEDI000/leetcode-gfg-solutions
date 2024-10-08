//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		int dis1=-1;
		int dis2=-1;
		int distance =INT_MAX;
		for(int i=0;i<s.size();i++)
		{
		    if(s[i]==word1)
		    {
		        
		        dis1=i;
		    }
		    if(s[i]==word2)
		    {
		        dis2=i;
		    } 
		    if(dis1!=-1&&dis2!=-1)
		     distance=min(distance,abs(dis1-dis2));
		}
		return distance;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends