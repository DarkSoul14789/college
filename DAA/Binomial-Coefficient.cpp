#include <iostream>
using namespace std;
// Binomial coefficient using dp
// To find nCk

int C(int n,int k){
  int dp[n+1][k+1];
  int i,j;

  for (int i = 0; i < n+1; i++)
  {
    for (int j = 0; j < k+1 && j<=i; j++)
    {
      if(i==j || j==0){
        dp[i][j]=1;
      } 
      else{
        dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
      }
    }
  }
  return dp[n][k];
  
}
int main(){
  int n,r;
  cout<<"Enter value of n followed by value of r to calculate nCr"<<endl;
  cin>>n>>r;
  cout<<C(n,r);
}
