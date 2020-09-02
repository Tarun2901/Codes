class Main {

  public static int coinChangePermutation1(int coins[], int target, String ans)
  {
    if(target ==0)
    {
      System.out.println(ans);
      return 1;
    }
    int count = 0;
    for(int i = 0;i<coins.length;i++)
    {
      if(target-coins[i]>=0)
      {
        count+= coinChangePermutation1(coins,target - coins[i],ans+coins[i]);
      }
    }
    return count;
  }
  public static int coinChangeCombination1(int coins[], int target,int idx, String ans)
  {
    if(target ==0)
    {
      System.out.println(ans);
      return 1;
    }
    int count = 0;
    for(int i = idx;i<coins.length;i++)
    {
      if(target-coins[i]>=0)
      {
        count+= coinChangeCombination1(coins,target - coins[i],i,ans+coins[i]);
      }
    }
    return count;
  }
  //Neeche vaale mein ek coin ek baar hi use hoga
  public static int coinChangeCombinationsingle(int coins[], int target,int idx, String ans)
  {
    if(target==0)
    {
      System.out.println(ans);
      return 1;
    }
    int count = 0;
    for(int i = idx;i<coins.length;i++)
    {
      if(target-coins[i]>=0)
      {
        count+= coinChangeCombinationsingle(coins,target - coins[i],i+1,ans+coins[i]);
      }
    }
    return count;
  }
  //Permutation of single coin
 public static int coinChangePermutationSingle1(int[] coins,int tar,boolean[] vis,String ans){
      if(tar==0){
        System.out.println(ans);
        return 1;
      }
       
      int count = 0;
      for(int i = 0;i<coins.length;i++){
        if(!vis[i] && tar - coins[i]>=0){
          vis[i] = true;
          count += coinChangePermutationSingle1(coins,tar-coins[i],vis,ans  + coins[i]);
          vis[i] = false;
        }
      }

      return count;
    }
//Single vaale case mei combination using Subsequence
public static int coinChangeCombinationsinglesubsequence(int coins[], int target,int idx, String ans)
  {
    if(target==0||idx == coins.length)
    { if(target==0)
    {  
      System.out.println(ans);
      return 1;
    }
    }
    int count = 0;
      if(target-coins[idx]>=0)
      {
        count+= coinChangeCombinationsingle(coins,target - coins[idx],idx+1,ans+coins[idx]);
      }
    count+= coinChangeCombinationsingle(coins,target,idx+1,ans);
    return count;
  }
public static int coinChangeCombinationSubsquence(int coins[], int target,int idx, String ans)
  {
    if(target == 0||idx>=coins.length)
    { if(target==0)
    {
      System.out.println(ans);
      return 1;
    }
    }
    int count = 0;
    
      if(target-coins[idx]>=0)
      {
        count+= coinChangeCombination1(coins,target - coins[idx],idx,ans+coins[idx]);
      }
    count+= coinChangeCombinationSubsquence(coins,target,idx,ans);
    return count;
  }
 //Infinite use of 1 coin 
public static int coinChangePermutationsubsequence1(int coins[],int idx, int target, String ans)
  {
   if(tar==0 || idx >= coins.length){
        if(tar==0){
          System.out.println(ans);
          return 1;
        }
        return 0;
      }
       
      int count = 0;
      if(tar - coins[idx]>=0)
        count += coinChangePermutationsubsequence1(coins,0,tar-coins[idx],ans  + coins[idx]);
      
      count += coinChangePermutationsubsequence1(coins,idx+1,tar,ans);
  
      return count;
  }

   public static int coinChangePermutationSingle1Subsequence(int[] coins,int idx,int tar,boolean[] vis,String ans){
         if(tar==0 || idx >= coins.length){
        if(tar==0){
          System.out.println(ans);
          return 1;
        }
        return 0;
      }
       
      int count = 0;
      if(!vis[idx] && tar - coins[idx]>=0){
        vis[idx] = true;
        count += coinChangePermutationSingle1Subsequence(coins,0,tar-coins[idx],vis,ans  + coins[idx]);
        vis[idx] = false;
      }
      count += coinChangePermutationSingle1Subsequence(coins,idx+1,tar,vis,ans);
  
      return count;
    }
 public static void coinChange()
 {
   int[] coins = {2,3,5,7};
   int target = 10;
   boolean[] vis = new boolean[4];
   //System.out.println(coinChangePermutation1(coins, target,""));
   //System.out.println(coinChangeCombination1(coins, target,0,""));
   //System.out.println(coinChangeCombinationsingle(coins, target,0,""));
   //System.out.println(coinChangePermutationSingle1(coins, target,vis,""));
   System.out.println("-------------------------------------------");
  System.out.println(coinChangeCombinationsinglesubsequence(coins, target,0,""));
  //System.out.println(coinChangePermutationsubsequence1(coins,0,tar,""));
  //System.out.println(coinChangePermutationSingle1Subsequence(coins,tar,vis,""));

 }
  public static void solve()
  {
  coinChange();
  }
  public static void main(String[] args) {
    solve();
  }
}