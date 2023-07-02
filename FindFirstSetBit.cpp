#include <iostream>
using namespace std;
/*
Given an integer N. The task is to return the position of first set bit 
found from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function.
.................

Input: N = 18
Output: 2
Explanation: Binary representation of 
18 is 010010,the first set bit from the 
right side is at position 2.
*/
// we have to find position of 1Bit... 
int GivePositionOfBitSet(int n)
{
    if(n!=0)
    {
        int c=0;
        while(n!=0)
        {
            int rem=n%2;
            c++;
            if(rem == 1)
            {
                return c;
            }
            n=n/2;
        }
    }
    return 0;
}
int main()
{
    int num;
    cout<<"Enter Number "<<endl;
    cin>>num;
    cout<<"Position Of First 1-Bit:"<<GivePositionOfBitSet(num)<<endl;
    return 0;
}