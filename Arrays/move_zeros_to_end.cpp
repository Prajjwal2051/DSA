#include <iostream>
using namespace std;

void moveToEnd(int arr[], int n){
    for(int i =0; i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}


int main(){

    int arr[]={8,5,0,0,10,0,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    moveToEnd(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}