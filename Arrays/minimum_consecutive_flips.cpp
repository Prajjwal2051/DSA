#include <iostream>
using namespace std;

bool printgroups(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i]){
            if(arr[i]!=arr[0]){
                cout<<"From "<<i<<" to ";
            }
            else{
                cout<<i-1<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0]){
        cout<<n-1<<endl;
    }
}


int main(){

    // given array we need to flips the minimum number of bits to make it all 0 or all 1
    int arr[]={1,0,0,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    printgroups(arr,n);

    return 0;

}