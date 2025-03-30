#include <iostream>
using namespace std;

int max_sum_subarray(int arr[], int n){
    // naive method. we will traverse to all the subarray maintaing a sum and compare it with previous
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr = curr+arr[j];
            res=max(res,curr);
        }
    }
    return res;
}



int main(){

    int arr[]={2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int result=max_sum_subarray(arr,n);
    cout<<result<<endl;



    return 0;

}