// MergeSort
#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void merge(int l, int mid, int h, int arr[]){
    int i,j,k;
    int n1=mid-l+1;
    int n2=h-mid;
    int larr[n1];
    int rarr[n2];
    for (i = 0; i < n1; i++) {
        larr[i] = arr[l+i];
    }
    for (j = 0; j < n2; j++) {
        rarr[j] = arr[mid+1+j];
    }
    i=0;j=0;k=l;

    
    while(i<n1 && j<n2){
        if(larr[i]<=rarr[j]){
            arr[k] = larr[i];
            i++;
        }
        else{
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }
    
        while(i<n1){
            arr[k]=larr[i];
            i++;k++;
        }
    
    
        while(j<n2){
            arr[k] = rarr[j];
            j++;k++;
        }
    
}

void MergeSort(int l, int h, int arr[]){
    int mid;
    if(l<h){
        int mid = l+(h-l)/2;
        MergeSort(l,mid,arr);
        MergeSort(mid+1,h,arr);
        merge(l,mid,h,arr);    
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

    MergeSort(0,n,arr);
    
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
