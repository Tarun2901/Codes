class Main {
  public static int Nqueencombinations(boolean[] box,int idx, int qspf,int tnq, String ans)
  {
    if(qspf == tnq)
    {
      System.out.println(ans);
      return 1;
    }
    int count = 0;
    for(int i= idx;i<box.length;i++)
    {
     count+= Nqueencombinations(box,i+1, qspf+1, tnq, ans+"B"+i+"Q"+qspf+" ");
    }
    return count;
  }
 
  public static int Nqueenpermutations(boolean[] box,int idx, int qspf,int tnq, String ans)
  {
     if(qspf == tnq)
    {
      System.out.println(ans);
      return 1;
    }
    int count = 0;
    for(int i= 0;i<box.length;i++)
    {if(!box[i])
    {box[i]=true;
     count+= Nqueenpermutations(box,i+1, qspf+1, tnq,ans+"B"+i+"Q"+qspf+" ");
     box[i] = false;
    }
    }
    return count;
  }
  public static void solve()
  { 
  System.out.println(Nqueenpermutations(new boolean[6], 0, 0, 3,""));
  //System.out.println(Nqueencombinations(new boolean[6], 0, 0, 3,""));
  }
  public static void main(String[] args) {
    solve();
  }
}