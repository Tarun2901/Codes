#include<iostream>
using namespace std;
int length(char s[])
{
if(s[0]=='\0')
{ return 0;
}
int ssl= length(s+1);
return 1+ssl;

}
int main()
{
char str[100];
cin>>str;
int len=length(str);
cout<<len<<endl;
return 0;
}
