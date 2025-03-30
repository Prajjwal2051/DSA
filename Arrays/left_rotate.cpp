#include <iostream>
using namespace std;

void leftRotate(int arr[], int n){
    int temp=arr[0];
    int i;
    for(i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}



int main(){

        int arr[]={1,2,3,4,5};
        int n = sizeof(arr)/sizeof(arr[0]);
        cout<<"array before left rotate"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        leftRotate(arr,n);
        cout<<"array after left rotate"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    

    return 0;

}