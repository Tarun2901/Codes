#include<iostream>
using namespace std;
int fact(int n)
{ cout<<n<<endl;
if(n==0)
{
return 1;
}
int sop=fact(n-1);
return n*sop;
}
int main()
{int n;
cin>>n;
int output= fact(n);
cout<<output<<endl;
}
