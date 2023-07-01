#include<iostream>
using namespace std;
int Give1Bit(int n)
{
    int ans=0;
    while(n!= 0)
    {
        int rem=n%2;
        if(rem == 1)
        {
            ans++;
        }
        n=n/2;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter Number "<<endl;
    cin>>num;
    cout<<"Answer is: "<<Give1Bit(num)<<endl;
    return 0;
}