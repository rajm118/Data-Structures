#include<bits/stdc++.h>
using namespace std;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=nums.size();
        int count=0,max=INT_MIN;
        for(int i=0;i<l;i++)
        {
            if(nums[i]==1)
                count++;
            else
            {
                if(max<count)
                    max=count;
                count=0;
            }
            if(max<count)
                max=count;
        }
        return max;
 };
int main()
{
vector<int> nums;
int n;
while(cin>>n)
nums.push_back(n);
cout<<findMaxConsecutiveOnes(nums);
}
