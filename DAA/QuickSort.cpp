// Quicksort
#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int Partition(int l, int h, int arr[]){
    int pivot = arr[l];
    int i=l, j=h;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        
        do{
            j--;
        }while(arr[j]>pivot);
        
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void QuickSort(int l, int h, int arr[]){
    if(l<h){
        int j=Partition(l,h,arr);
        QuickSort(l,j,arr);
        QuickSort(j+1,h,arr);
    }
}

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    QuickSort(0,n,arr);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }    

    return 0;
}
