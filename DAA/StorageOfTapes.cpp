#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n = 3;
  int arr[n] = {5,3,10};
  int order[n];

  sort(arr, arr+n);
  cout<<"Optimal order of storage: "<<endl;
  for (int i = 0; i < n; i++)
  {
    order[i] = arr[i];
    cout<<order[i]<<" ";
  }
}
