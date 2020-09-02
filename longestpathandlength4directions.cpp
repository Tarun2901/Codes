#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> vis;
vector<vector<int>> dir = {{1,0},{0,-1},{-1,0},{0,1}};
vector<string> dirs = {"D","L","U","R"};
//vector<vector<int>> dir = {{1,0},{0,-1},{-1,0},{0,1},{1,1},{-1,-1},{-1,1},{1,-1}};
//vector<string> dirs = {"D","L","U","R","S","N","E","W"};
int floodfill_jump(int sr, int sc, int er, int ec,string ans)
{
if(sr==er&&sc==ec)
{
  cout<<ans<<endl;
  return 1;
}
//DFS mein aate hi mark karo
vis[sr][sc] = 1;
int count = 0;
for(int jump = 1;jump<=max(er,ec);jump++)
{
for(int d = 0;d<dir.size();d++)
{
  int r = sr + jump*dir[d][0];
  int c = sc + jump*dir[d][1];
// Check the boundary cases and also check it is unvisited
  if(r>=0&&c>=0&&r<vis.size()&&c<vis[0].size()&&vis[r][c]==0)
  {
    count+= floodfill_jump(r,c,er,ec,ans+dirs[d]+to_string(jump)+" ");
  }
}
}
//DFS mein last mein unmark karte hain hum
vis[sr][sc] = 0;
return count;
}

class pathpair
{
public:
  string path;
  int len;

  pathpair(string path,int len)
  {
    this->path = path;
    this->len = len;
  }
};

 pathpair floodfillshortest_jump(int sr, int sc, int er, int ec)
{
if(sr==er&&sc==ec)
{
  pathpair p("",0);
  return p;
}
//DFS mein aate hi mark karo
vis[sr][sc] = 1;
int count = 0;
pathpair ans("",-1e8);
for(int jump = 1;jump<=max(er,ec);jump++)
{
for(int d = 0;d<dir.size();d++)
{
  int r = sr + jump*dir[d][0];
  int c = sc + jump*dir[d][1];
// Check the boundary cases and also check it is unvisited
  if(r>=0&&c>=0&&r<vis.size()&&c<vis[0].size()&&vis[r][c]==0)
  {
    pathpair recans = floodfillshortest_jump(r,c,er,ec);
    if(recans.len+1>ans.len)
    {
      ans.len = recans.len+1;
      ans.path = dirs[d] + to_string(jump)+" "+recans.path;

    }
  }
}
}
//DFS mein last mein unmark karte hain hum
vis[sr][sc] = 0;
return ans;
}



void pathSet()
{ int n =3;
int m =3;
  vis.resize(n, vector<int>(m,0));
  pathpair temp = floodfillshortest_jump(0,0,2,2);
  cout<<temp.path<<endl;
  cout<<temp.len<<endl;
}

void solve()
{
  pathSet();
}
int main() {
  solve();
}