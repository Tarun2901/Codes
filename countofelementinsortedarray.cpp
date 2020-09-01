#include<iostream>
using namespace std;
int binarysearch1(int data, int arr[], int n)
{ int res = 0;
int start = 0;
int end = n-1;
while(start<=end)
{
int mid = start+(end-start)/2;
if(arr[mid]==data)
{
res = mid;
mid = end-1;
}
if(arr[mid]<data)
{
start = mid+1;
}
else
{
end = mid-1;
}
}
return res;
}
int binarysearch2(int data, int arr[], int n)
{ int res = 0;
int start = 0;
int end = n-1;
while(start<=end)
{
int mid = start+(end-start)/2;
if(arr[mid]==data)
{
res = mid;
start = mid+1;
}
if(arr[mid]<=data)
{
start = mid+1;
}
else
{
end = mid-1;
}
}
return res;
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
int fi = binarysearch1(data,arr,n);
int li = binarysearch2(data,arr,n);
int answer = li-fi+1;
cout<<answer<<endl;

}
