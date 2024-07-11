//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    /* If x is present in arr[] then returns the count
       of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x) {
        int firstIndex = findFirst(arr, n, x);
        int lastIndex = findLast(arr, n, x);
        if (firstIndex == -1) return 0; 
        return lastIndex - firstIndex + 1; 
    }

    int findFirst(int arr[], int n, int x) {
        int low = 0;
        int high = n - 1;
        int first = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                first = mid;
                high = mid - 1; 
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return first;
    }

    int findLast(int arr[], int n, int x) {
        int low = 0;
        int high = n - 1;
        int last = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                last = mid;
                low = mid + 1; 
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return last;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends