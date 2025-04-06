#include <iostream>
#include <climits>
using namespace std;

// naive solution
int maxSum(int arr[], int n, int k){
    int res=INT_MIN;
    for(int i=0;i+k-1<n;i++){
        int curr=0;
        for(int j=0;j<k;j++){
            curr+=arr[i+j];
        }
        res=max(curr,res);
    }
    return res;
}

// using the sliding window technique
int sliding_window(int arr[], int n, int k){
    int curr=0;
    for(int i=0;i<k;i++){
        curr+=arr[i];
    }
    int res=curr;
    for(int i=k;i<n;i++){
        curr=curr+arr[i]-arr[i-k];
        res=max(res,curr);
    }
    return res;
}

int main(){

    // we need to find the maximum  of the consecutive elements.
    int arr[]={10,5,-2,20,1};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);

    int result1=maxSum(arr,n,k);
    cout<<result1<<endl;
    int result2=sliding_window(arr,n,k);
    cout<<result2<<endl;



    return 0;

}