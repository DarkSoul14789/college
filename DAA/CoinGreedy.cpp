#include <iostream>
#include <algorithm>
using namespace std;

// Coin changing problem using greedy approach

int coinsChange(int coins[], int n, int sum){
  int s=0,i=0,j=0,count=0;
  int change[100] = {0}; // Max change taken should be less than 100
  while (s<=sum && i<n)
  {
    while(coins[i]+s <= sum){
      change[j] = coins[i];
      count++;
      j++;
      s=s+coins[i];
    }
    i++;
  }
  // Prints the coin change
  cout<<"Coins: ";
  for (int k = 0; change[k]!=0; k++)
  {
    cout<<change[k]<<" ";
  }
  cout<<endl;

  // Returns number of coin change
  return count;
}

int main(){
  // --> STATIC TESTING 
  // int n = 3;
  // int coins[n] = {1,2,5};
  // int sum = 7;
  // int n = 4;
  // int coins[n] = { 1,5,6,8 };
  // int sum = 12; // This test case fails in greedy approach

  int n,sum;
  cout<<"Enter number of coins: ";
  cin>>n;
  int coins[n];
  cout<<"Enter the denominations of the coins: ";
  for (int i = 0; i < n; i++)
  {
    cin>>coins[i];
  }
  cout<<"Enter required sum: ";
  cin>>sum;

  sort(coins,coins+n, greater<int>());

  int ans = coinsChange(coins,n,sum);
  cout<<"No. of coins: "<<ans;
}
