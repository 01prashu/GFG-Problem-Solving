#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void DeleteMiddleElementOfStack(stack<int>&s , int sizeOfSatck)
{
    stack<int>temp;
    int pos =(sizeOfSatck +1)/2;
    while(!s.empty())
    {
        if(s.size() == pos)
        {
            s.pop();
            break;
        }
        int t=s.top();
        s.pop();
        temp.push(t);
    }
    while(!s.empty())
    {
        int t=s.top();
        s.pop();
        temp.push(t);
        
    }
    while(!temp.empty())
    {
        int t=temp.top();
        s.push(t);
        temp.pop();
    }
}
void DisplayStack(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int t=s.top();
    s.pop();
    DisplayStack(s);
    cout<<t<<" ";
    s.push(t);
}
int main()
{
    stack<int>s;
    int size;
    cout<<"Enter Size Of Stack"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int t;
        cin>>t;
        s.push(t);
    }
    DeleteMiddleElementOfStack(s , size);
    DisplayStack(s);
    return 0;
}
