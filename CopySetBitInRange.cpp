#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*Given two numbers X and Y, and a range [L, R] where 1 <= L <= R <= 31.
You have to copy the set bits of 'Y' in the range L to R in 'X'. 
Return this modified X.
Note: Range count will be from Right to Left & start from 1.

nput: 
X = 44, Y = 3 
L = 1,  R = 5
Output: 
47
Explaination: 
Binary represenation of 44 and 3 is 101100 and 000011. 
So in the range 1 to 5 there are two set bits of 3 (1st & 2nd position). 
If those are set in 44 it will become 101111 which is 47.
*/
int GiveUpdateNum(int x , int y ,int l ,int r)
{
    string str1="" ,str2="";
    int ans=0;
    while(x)
    {
        // int rem=x%2;
        str1=str1+to_string(x%2);
        x=x/2;
    }
    while(y )
    {
        // int rem=y%2;
        str2=str2+to_string(y%2);
        y=y/2;
    }

    int s1=str1.length();
    int s2=str2.length();
    // we have to equal two string so we are adding zero
    if(s1 < s2)
    {
        for(int i=0;i<abs(s2-s1);i++)
        {
            str1=str1+'0';
        }
    }
    else
    {
        for(int i=0;i<abs(s1-s2);i++)
        {
            str2=str2+'0';
        }
    }
    //Now we have to check range in "Str2"(bit of y) from left to right 
    //If "1 bit" present then update in Str2(bit of X)
    for(int i=l;i<=r;i++)
    {
        if(str2[i-1]=='1' && str1[i-1]=='0')
        {
            str1[i-1]='1';
        }
    }
    // we updated str1 bit now , we calculate new number from str1
    for(int i=0;i<s1;i++)
    {
        if(str1[i] == '1')
        {
            int p=pow(2 ,i);
            ans=ans+p;
        }
    }
    return ans;
}
int main()
{
    int x , y , l , r;
    cout<<"Enter Two Number"<<endl;
    cin>>x>>y;
    cout<<"Enter Range L and R"<<endl;
    cin>>l>>r;
    cout<<"Final answer After Copying bit :"<<GiveUpdateNum(x , y , l ,r)<<endl;
    return 0;
}