#include<iostream>
using namespace std;
#include<cstring>
#include<vector>


int HVD(int sr, int sc, int er, int ec, string ans)
{

if(sr == er&& sc == ec)
{
cout<<ans<<endl;
return 1;
}

int count = 0;
for(int jump = 1;sr+jump<=er;jump++)
  count+= HVD(sr+jump,sc,er,ec,ans+"V"+to_string(jump));
for(int jump = 1;jump+sc<= ec;jump++)
  count+= HVD(sr,sc+jump,er,ec,ans+"H"+to_string(jump));
for(int jump = 1; sr+jump<=er&&sc+jump<=ec;jump++)
  count+= HVD(sr+jump,sc+jump,er,ec,ans+"D"+to_string(jump));

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
