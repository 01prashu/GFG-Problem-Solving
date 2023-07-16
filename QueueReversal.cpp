

#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int>temp;
        while(!q.empty())
        {
            int t=q.front();
            temp.push(t);
            q.pop();
        }
        while(!temp.empty())
        {
            int t=temp.top();
            temp.pop();
            q.push(t);
        }
        return q;
    }
};


//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
