#include <iostream>
#include <algorithm>
using namespace std;


int main(){
  int C = 400;
  int n = 8;
  int arr[n] = {100,200,50,150,90,50,20,80};
  sort(arr,arr+n);
  int c,count = 0;
  for (int i = 0; i < n; i++)
  {
    if(c>=C || c+arr[i]>=C)
      break;
    if(c+arr[i]<=C){
      count++;
      c = c + arr[i];
    }
  }
  cout<<"No. of containers that can be fit: "<<count;
  
}
