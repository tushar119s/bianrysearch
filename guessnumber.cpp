#include<iostream>
using namespace std;
	
class Solution {
public:
    int guessNumber(int n)
    {
        int high=n,low=1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int a = guess(mid);
            if(a==0)
            {
                return mid;
            }
            else if(a==1)
            {
                low=mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return 0;

    }
};