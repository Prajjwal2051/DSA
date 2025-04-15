#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

// now using the binary search

int bSearch(int arr[], int n, int key){
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>key){
            high=mid-1;
        }
        if(arr[mid]<key){
            low=mid+1;
        }
        if(arr[mid]==key){
            return mid;
        }
    }
    return -1;
}


int main(){

    int arr[]={10,8,30,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=50;
    int res1=linear_search(arr,n,key);
    cout<<res1<<endl;
    int res2=bSearch(arr,n,key);
    cout<<res2<<endl;
    return 0;

}