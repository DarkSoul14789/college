// Min Max using divide and conquer

#include <iostream>

using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair minmax(int arr[], int low, int high){
    int mid;
    struct Pair ans, a,b;
    if(high==low){
        ans.max = arr[low];
        ans.min = arr[low];
        return ans;
    }
    if(high == low+1){
        if(arr[high]>arr[low]){
            ans.max = arr[high];
            ans.min = arr[low];
        }else{
            ans.max = arr[low];
            ans.min = arr[high];
        }
    }
    mid = (low+high)/2;
    a = minmax(arr, low, mid);
    b = minmax(arr, mid+1, high);
    
    if(a.min < b.min){
        ans.min = a.min;
    }
    else{
        ans.min = b.min;
    }
    if(a.max < b.max){
        ans.max = b.max;
    }
    else{
        ans.max = a.max;
    }
    
    return ans;
}

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers"<<endl;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    // int arr[5] = {1,7,5,30,6};
    struct Pair p = minmax(arr, 0, n-1);
    cout<<p.min<<endl<<p.max;

    return 0;
}
