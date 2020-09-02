import java.util.Arrays;
class Main {

static int[] xMove = { 2, 1, -1, -2, -2, -1, 1, 2 }; 
static int[] yMove = { 1, 2, 2, 1, -1, -2, -2, -1 }; 
  public static boolean KnightTour1(int[][] board ,int sr ,int sc, int steps){
    board[sr][sc] = steps;
   if(steps==63)
    {return true;
    }
for(int d = 0;d<xMove.length;d++)
{

  int r = sr+xMove[d];
  int c = sc+yMove[d];
  //if mei check kar rhe hain valid jagah jarhe hain ya nhi
  //+ unfilled hai uske liye -1 fill kardia thaa
  if(r>=0&&c>=0&&r<8&&c<8&&board[r][c]==-1)
  {
    boolean res = KnightTour1(board, r, c, steps+1);
    if(res) 
    {return true;
    }
  }
}
board[sr][sc] = -1;
return false;
}
public static void KnightTour(){
int [][] board = new int[8][8];
for(int[] a:board) Arrays.fill(a,-1);
KnightTour1(board,0,0,0);
for(int[] a:board)
{
  for(int ele:a)
  {
    System.out.println(ele + " ");
  }
  System.out.println();
}
}
public static void solve(){
  KnightTour();
}
  public static void main(String[] args) {
   solve();
  }
}