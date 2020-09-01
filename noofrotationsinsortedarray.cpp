#include<iostream>
using namespace std;
int binarysearch(int arr[], int n)
{ int pivot = -1;
int start = 0;
int end = n-1;
while(start<=end)
{
//After reducing search space there might be a case we will be left with sorted numbers. In that case we can't apply rest of the algorithm so after each iteration we have to check if arr[start] < arr[end] then return first element of this. Because arr[start] will be smallest element.
if(arr[start]<=arr[end])
{
return start;
}
int mid = start+(end-start)/2;
int next = (mid+1)%n; 
//%n is being done to prevent overflow (i.e. if mid = n-1, then in that case we can go to 0 as its next value 
int prev = (mid+n-1)%n; // %n is being done to prevent going to index -1 from 0.
if(arr[mid]<arr[next]&&arr[mid]<arr[prev])
{
pivot = mid;
break;
}
if(arr[start]<arr[mid])
{
start = mid+1;
}
else if(arr[end]>arr[mid])
{
end = mid-1;
}
}
return pivot;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++)
{
cin>>arr[i];
}
int answer = binarysearch(arr,n);
cout<<answer<<endl;
return 0;
}
