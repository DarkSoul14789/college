//fractional knapsack problem
#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int objects[] = {1,2,3,4,5,6,7};
    int profits[] = {10,5,15,7,6,18,3};
    int weights[] = {2,3,5,7,1,4,1};
    int W = 15; //maxium weight of the knapsack
    int w = 0; //current weight of the knapsack
    float profit=0.0; //final profit
    
    // finding the size of the array    
    int size = sizeof(objects)/sizeof(objects[0]);


    // filling up the ratios array 
    float ratio[size];
    for (int i = 0; i < size; i++) {
        ratio[i] = (float)profits[i]/weights[i];
    }

    // sorting in decreasing order of ratio
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(ratio[i]<ratio[j]){
                swap(ratio[i],ratio[j]);
                swap(profits[i],profits[j]);
                swap(weights[i],weights[j]);
                swap(objects[i],objects[j]);
            }
        }
    }
    

    
    // start of the main logic
    for (int i = 0; i < size; i++) {
        
        // break from loop if the knapsack is full
        if(w>=W){
            break;
        }
        
        // add the full profit of the object if the available weight is more than the object weight
        else if(weights[i]<=W-w){
            profit = profit+(ratio[i]*weights[i]);
            w=w+weights[i];
        }
        
        // if the available weight is less than the object weight, add only the fractional weight 
        else if(weights[i]>W-w){
            profit = profit+(ratio[i]*(W-w));
            w=W;
        }
    }
    //end of main logic
    
    cout<<"Maximum profit is: "<<profit;
    

    return 0;
}
