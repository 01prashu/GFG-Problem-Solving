#include<iostream>
using namespace std;
/*Happy Number --whose squre of digit sum is 1 
ex)13
1^2 + 3^2 =10
1^2 + 0^2=1
hence 13 is happy number
*/
/*In this question we have to find next happy number of given integer
To solve this , we check each number from given happy number using function "checkHappy(integer)" if we get true value means  our number is HappyNumber we are going to return this
*/
bool checkHappy(int n)
{
    int  c=10;
    while(c)
    {
        int sum=0;
        while(n)
        {
            int digit=n%10;
            sum=sum +(digit *digit);
            n=n/10; 
        }
        if(sum == 1)
        {
            return true;
        }
        c--;
        n=sum; 
    }
    return false;
}
int giveans(int num)
{
    while(num++)
    {
        if(checkHappy(num))
        {
            return num;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int result=giveans(n);
    cout<<result<<endl;
    return 0;
}