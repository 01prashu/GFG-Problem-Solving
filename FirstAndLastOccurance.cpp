
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n, int x) {
    vector<int> ans;
    vector<int> index;
    int s = 0;
    int e = n - 1;
    
    while (s <= e) {
        int mid = (s + e) / 2; // Move mid calculation inside the loop
        
        if (arr[mid] == x) {
            index.push_back(mid);
        }
        else if (arr[mid] > x) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    
    if (index.empty()) {
        // If the element is not found, return {-1, -1}
        ans.push_back(-1);
        ans.push_back(-1);
    }
    else {
        ans.push_back(index.front()); // Smallest index
        ans.push_back(index.back()); // Largest index
    }
    
    return ans;
}


//{ Driver Code Starts.

int main()
{

    int n, x;
    cin >> n >> x;
    int arr[n], i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> ans;
    ans = find(arr, n, x);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}

