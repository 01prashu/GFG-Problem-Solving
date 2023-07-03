#include<iostream>
using namespace std;
/*****Problem - Statement
 Given a non-negative integer N. 
 The task is to check if N is a power of 2.
 More formally, check if N can be expressed as 2x for some x.
*/
bool IsPowerOfTwo(int n)
{
    string str="";
    int c=0;
    /***********Logic********
     --First Find the binary form of given number
     --then count 1bit  if 1Bit is Greater than 1 then it is not power Of 2
      why: Because ,If any number is power of two menas it only have single 2^(x) any value
      ex)8
       1000--It is power of two
       10
       1010--It is Not

    */
    while(n!= 0)
    {
        int rem=n%2;
        str=str+to_string(rem);
        n=n/2;
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='1')
        {
            c++;
        }
    }
    if(c>1)
    {
        return false;
    }
    return true;
    
}
int main()
{
    int num;
    cout<<"Enter A Number"<<endl;
    cin>>num;
    if(IsPowerOfTwo(num) == true)
    {
        cout<<"Above Number is Power Of 2 "<<endl;
    }
    if(IsPowerOfTwo(num) == false)
    {
        cout<<"It is not Power Of Two"<<endl;
    }
    
    return 0;
}