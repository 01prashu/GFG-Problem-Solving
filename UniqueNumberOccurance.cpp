#include<iostream>
#include <bits/stdc++.h>
using namespace std;
/*N = 10
arr = [2, 2, 5, 10, 1, 2, 10, 5, 10, 2]
Output:
true
Explanation:
Number of 1’s -> 1
Number of 2’s -> 4
Number of 5’s -> 2
Number of 10’s -> 3.

##Frequencies Of Each element is unique hence it returns true

**********Approche*************
1)First find the frequncies of each element of an array in map
2)Use set because we know , set store unique value
--Store the all the frequncies of each element in set
3) Check size of set and map are same or not
--If size is same means we have unique frequencies of each element
*/
bool CheckUniqueOrNot(int arr[] , int size)
{
    unordered_map<int , int>mp;
    set<int>st;
    for(int i=0;i<size;i++)
    {
        mp[arr[i]]++;
    }
    for(auto t:mp)
    {
        st.insert(t.second);
    }
    if(st.size() != mp.size())
    {
        return false;
    }
    return true;
}
int main()
{
    int arr[1000];
    int size;
    cout<<"Enter Number Of Elements"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // N = 10
//arr = [2, 2, 5, 10, 1, 2, 10, 5, 10, 2]
    bool ans =CheckUniqueOrNot(arr , size);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}