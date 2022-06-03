#include <iostream>
#include <string>
using namespace std;

int lcs(string X, string Y, int n, int m, char trace[]){
  int dp[n+1][m+1];
  for (int i = 0; i < n+1; i++)
  {
    for (int j = 0; j < m+1; j++)
    {
      if(i==0 || j==0){
        dp[i][j] = 0;
      }
      else if(X[i-1]==Y[j-1]){
        dp[i][j] = 1+dp[i-1][j-1];
      }
      else{
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
      // cout<<dp[i][j];
    }
    // cout<<endl; 
  }
  // Tracing the lcs
  int index = dp[n][m];
  trace[index] = '\0';
  int i = n, j = m;
  while(i>0 && j>0){
    if(X[i-1] == Y[j-1]){
      trace[index-1] = X[i-1];
      i--;
      j--;
      index--;
    }
    else if(dp[i-1][j] > dp[i][j-1]){
      i--;
    }
    else{
      j--;
    }

  }

  return dp[n][m];
}

int main(){
  string X;
  string Y;
  cout<<"Enter string 1: ";
  cin>>X;
  cout<<"Enter string 2: ";
  cin>>Y;
  // string X = "ABCD";
  // string Y = "ADBC";
  // string X = "AGGTAB";
  // string Y = "GXTXAYB";
  int n = X.length();
  int m = Y.length();
  char trace[max(n,m)];
  int index = lcs(X,Y,n,m,trace);
  cout<<"LCS is: "<<index<<endl<<"String is: ";
  for(int i=0; i<=index; i++){
    cout<<trace[i];
  }
  
}
