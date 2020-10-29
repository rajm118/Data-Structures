#include <bits/stdc++.h>

using namespace std;
 int findNumbers(vector<int>& nums) {
        int count,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            while(nums[i])
            {
                count++;
                nums[i]/=10;
            }
            if(count%2==0)
                sum++;
        }
        return sum;
    };
int main() {
    
    vector<int> nums;
    int n;
    while(cin>>n)
    nums.push_back(n);
    cout<<findNumbers(nums);
}
