#include <iostream>
using namespace std;

int getWater(int arr[], int n){
    int res=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i];

        // for finding the lmax
        for(int j=0;j<i;j++){
            lmax=max(lmax,arr[j]);
        }

        // for finding the rmax
        int rmax=arr[i];
        for(int j=i+1;j<n;j++){
            rmax=max(rmax,arr[j]);
        }
        res=res+(min(lmax,rmax)-arr[i]);
    }
    return res;
}

int getWater2(int arr[], int n){
    int res=0;
    int lmax[n];
    int rmax[n];    // creating two arrays for the lmax and rmax
    lmax[0]=arr[0];
    for(int i=0;i<n;i++){
        lmax[i]=max(arr[i],lmax[i-1]);
    }

    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(arr[i],rmax[i+1]);
    }

    for(int i=1;i<n-1;i++){
        res=res+(min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
}


int main(){

    int arr[]={3,0,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=getWater2(arr,n);
    cout<<result<<endl;

    return 0;

}