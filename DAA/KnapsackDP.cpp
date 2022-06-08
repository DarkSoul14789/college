#include <iostream>

using namespace std;

int KnapsackDP(int weights[], int n, int profits[], int W){
  int dp[n+1][W+1];

  for (int i = 0; i < n+1; i++)
  {
    for (int j = 0; j < W+1; j++)
    {
      if(i==0 || j==0){
        dp[i][j] = 0;
      }
      else if(weights[i-1]>j){
        dp[i][j] = dp[i-1][j];
      }
      else{
        dp[i][j] = max(dp[i-1][j], profits[i-1]+dp[i-1][j-weights[i-1]]);
      }
      cout<<dp[i][j]<<" ";
    }
    cout<<endl;
  }
  return dp[n][W];
  
}

int main(){
  int n = 3;
  int weights[n] = {1,2,3};
  int profits[n] = {10,15,40};
  int W = 6;

  // int n = 3;
  // int weights[n] = {10,20,30};
  // int profits[n] = {60,100,120};
  // int W = 50;

  // int n = 4;
  // int weights[n] = {3,4,6,5};
  // int profits[n] = {2,3,1,4};
  // int W = 8;
  int ans = KnapsackDP(weights, n, profits, W);
  cout<<"Maximum profit: "<<ans;
}
