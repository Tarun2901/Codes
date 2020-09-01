#include<iostream>
using namespace std;
#include<cstring>
int HVD(int sr, int sc, int er, int ec, string ans)
{

if(sr == er&& sc == ec)
{
cout<<ans<<endl;
return 1;
}

int count = 0;
if(sr+1<=er)
{
count+= HVD(sr+1,sc,er,ec,ans+"V");
}
if(sc+1<=ec)
{
count+= HVD(sr,sc+1,er,ec,ans+"H");
}
if(sc+1<=ec&&sr+1<=er)
{
count+= HVD(sr+1,sc+1,er,ec,ans+"D");
}
return count;

}
int main()
{
string ans;
ans = "";
int k = HVD(0,0,2,2,ans);
cout<<k<<endl;
return 0;
}
