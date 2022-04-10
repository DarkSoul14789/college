// Job scheduling with deadlines
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Jobs[] = {1,2,3,4,5,6,7};
    int profits[] = {35,30,25,20,15,12,5};
    int deadlines[] = {3,4,4,2,3,1,2};
    
    //finding size of the arrays
    int size = sizeof(Jobs)/sizeof(Jobs[0]);
    
    int n=0; //finding maximum deadline
    for (int i = 0; i < size; i++) {
        if(deadlines[i]>n){
            n=deadlines[i];
        }
    }
    
    int job[n] = {0}; //initialised array for storing final profit values
    
    //start of main logic
    for (int i = 0; i < size; i++) {
        int j = deadlines[i]-1;
        if(job[j] == 0){
            job[j] = profits[i];
        }
        else{
            while(j>=0){
                if(job[j]==0){
                    job[j] = profits[i];
                    break;
                }
                else{
                    j--;
                }
            }
        }
    }
    //end of main logic
    
    int total_profit=0;
    for (int i = 0; i < n; i++) {
        cout<<job[i]<<" ";
        total_profit=total_profit+job[i];
    }
    cout<<endl<<"Total profit: "<<total_profit;
    return 0;
}
