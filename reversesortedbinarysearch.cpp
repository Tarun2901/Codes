#include<iostream>
using namespace std;
int binarysearch(int data, int arr[], int n)
{
int start = 0;
int end = n-1;
while(start<=end)
{
int mid = start+(end-start)/2;
if(arr[mid]==data)
{
return mid;
}
if(arr[mid]<data)
{
end = mid-1;
}
else
{
start = mid+1;
}
}
return -1;
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
int data; 
cin>>data;
int answer = binarysearch(data,arr,n);
cout<<answer<<endl;

}
