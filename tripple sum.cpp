#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,sum,start,end,count=0;
   cin>>n>>sum;
   int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   sort(arr,arr+n);
   int target=0;
   start=0,end=n-1;
   for(int i=0;i<n;i++)
   {
       start=0;
       target=0;
       target=sum-arr[i];
       while(1)
       {
           if(arr[start]+arr[end]==target)
           {
               count++;
               start++;
               end--;
           }
           else if(arr[start]+arr[end]>target)
           end--;
           else if(arr[start]+arr[end]<target)
           start++;
           
           if(end-start==1 or end==start or end<start)
           break;
       }
   }
   cout<<count;
}

