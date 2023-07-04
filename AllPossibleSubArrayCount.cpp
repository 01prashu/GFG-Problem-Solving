/*I Solved this Problem Using Two Approches
1) 
In Below Approche we solved using Brute-Force Approche within O(n^3) T.C */
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<vector<int>> GiveAllPossibleSubArray(int arr[], int size) {
//     vector<vector<int>> ans;
//     for (int i = 0; i < size; i++) {
//         for (int j = i; j < size; j++) {
//             vector<int> temp;
//             for (int k = i; k <= j; k++) {
//                 temp.push_back(arr[k]);
//             }
//             ans.push_back(temp);
//         }
//     }
//     return ans;
// }

// void Display(int arr[], int size) {
//     cout << "Your Array is: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<vector<int>> ans;
//     int size;
//     cout << "Enter Size of array: " << endl;
//     cin >> size;
//     int arr[100];
//     cout << "Enter Your Array Elements: " << endl;
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     Display(arr, size);
//     ans = GiveAllPossibleSubArray(arr, size);
//     for (int i = 0; i < ans.size(); i++) {
//         for (int j = 0; j < ans[i].size(); j++) {
//             cout << "[" << ans[i][j] << "]";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/****************************Let's See Another Approch*******************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="12345";
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        for(int j=1;j<=str.size()-i;j++)
        {
            
            int num=stoi(str.substr(i , j));
            cout<<num<<endl;
        }
    }
    return 0;
}