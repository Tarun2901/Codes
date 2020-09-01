#include<iostream>
#include<cstring>
using namespace std;

int permuteit(string str, string ans)
{
if(str.length()==0)
{
cout<<ans<<endl;
return 1;
}
int count = 0;
for(int i = 0;i<str.length();i++)
{ char ch = str[i];
string res = str.substr(0,i) + str.substr(i+1);
count+= permuteit(res,ans+ch);
} 
return count;
}

int main()
{
string str;
cin>>str;
string ans = "";
int k = permuteit(str,ans);
cout<<k<<endl;
return 0;
}
