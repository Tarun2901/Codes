#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> vis;
vector<vector<int>> dir = {{1,0},{0,-1},{-1,0},{0,1}};
vector<string> dirs = {"D","L","U","R"};
int floodfill(int sr, int sc, int er, int ec,string ans)
{
if(sr==er&&sc==ec)
{
  cout<<ans<<endl;
  return 1;
}
//DFS mein aate hi mark karo
vis[sr][sc] = 1;
int count = 0;
//for loop made using the 
for(int d = 0;d<dir.size();d++)
{
  int r = sr + dir[d][0];
  int c = sc+dir[d][1];
// Check the boundary cases and also check it is unvisited
  if(r>=0&&c>=0&&r<vis.size()&&c<vis[0].size()&&vis[r][c]==0)
  {
    count+= floodfill(r,c,er,ec,ans+dirs[d]);
  }
}



//DFS mein last mein unmark karte hain hum
vis[sr][sc] = 0;
return count;

}
void pathSet()
{ int n =3;
int m =3;
  vis.resize(n, vector<int>(m,0));
  cout<<floodfill(0,0,2,2,"")<<endl;
}

void solve()
{
  pathSet();
}
int main() {
  solve();
}