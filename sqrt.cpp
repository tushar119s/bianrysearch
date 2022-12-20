#include<iostream>

using namespace std;


class Solution
{
public:
    int mySqrt(int x)
    {
        int mid,high,low;
        while(low<=high)
        {
            mid = (high+low)/2;
            if(mid*mid>x)
            {
                high=mid-1;
            }
            else if(mid*mid<=x)
            {
                
            }
        }
    }
};