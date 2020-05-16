#include<iostream>
using namespace std;
bool isSorted(int a[], int size)
{
if(size==0||size==1)
{
return true;
}
if(a[0]>a[1])
{
return false;
}
bool issmallsorted = isSorted(a+1,size-1);
return issmallsorted;
}
int main()
{
int arr[]= {1,2,9,4,5,6};
int size= (sizeof(arr)/sizeof(arr[0]));
bool issort= isSorted(arr,size);
cout<<issort<<endl;
return 0;
}
