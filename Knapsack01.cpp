// 0-1 Knapsack simple recursive solution using simple method as given by Aditya Verma -> 
// Here we make the base case by thinking of the (smallest valid input 
// The rest of the logic is made by first making a choice diagram and then transforming it into code!!
#include<iostream>
#include<algorithm>
using namespace std;

int knapsack(int weight[], int val[], int w, int n)
{
if(w==0||n==0)
{
return 1;
}
if(weight[n-1]<=w)
{
return max(val[n-1]+knapsack(weight,val, w-weight[n-1], n-1), knapsack(weight,val,w,n-1));
}
else if(weight[n-1]>w)
{
return knapsack(weight,val,w,n-1);
}
}
int main()
{
int n;
cin>>n;
int w;
cin>>w;
int val[n];
int weight[n];
for(int i = 0;i<n;i++)
{
cin>>weight[i]>>val[i];
}

int max = knapsack(weight,val,w,n);
cout<<max<<endl;
return 0;
}

