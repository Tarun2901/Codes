#include<iostream>
using namespace std;
#include<cstring>
int HV(int sr, int sc, int er, int ec, string ans)
{

if(sr == er&& sc == ec)
{
cout<<ans<<endl;
return 1;
}

int count = 0;
if(sr+1<=er)
{
count+= HV(sr+1,sc,er,ec,ans+"V");
}
if(sc+1<=ec)
{
count+= HV(sr,sc+1,er,ec,ans+"H");
}

return count;

}
int main()
{
string ans;
ans = "";
int k = HV(0,0,2,2,ans);
cout<<k<<endl;
return 0;
}
