#include <iostream>
using namespace std;

// our task is to find the wheather the given sum is in the subarray or not ?
// this is the naive solution 
bool isSubSUm(int arr[], int sum,int n){
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr+=arr[j];
            if(curr==sum){
                return true;
            }

        }
    }
    return false;
}

bool sliding_window(int arr[], int sum, int n){
    int s=0, curr_sum=0;
    for(int e=0;e<n;e++){
        curr_sum+=arr[e];
        while(sum<curr_sum){
            curr_sum-=arr[s];
            s++;
        }
        if(curr_sum==sum){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[]={3,2,0,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=isSubSUm(arr,6,n);
    cout<<res<<endl;
    int res1=sliding_window(arr,6,n);
    cout<<res1<<endl;
    return 0;


}