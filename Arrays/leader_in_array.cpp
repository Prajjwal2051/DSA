#include <iostream>
using namespace std;

void leaders(int arr[], int n){
    bool flag=false;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
            if(flag==false){
                cout<<arr[i]<<" ";
            }
        }
    }
}

int main(){

        int arr[]={7,10,4,6,5,2};
        int n=sizeof(arr)/sizeof(arr[0]);

        cout<<"array"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        leaders(arr,n);

        

    return 0;

}