#include <iostream>
using namespace std;

int remdpr(int arr[], int n){
    if (n==0){
        return 0;
    }
    int res=1;  // first element is the unique element;
    for(int i =1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}


int main(){

    int arr[]={1, 2, 2, 3, 4, 4, 4, 5, 6, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before size is"<<n<<endl;
    cout<<"array before remdpr"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int res=remdpr(arr,n);
    cout<<"array after remdpr"<<endl;
    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"the new size is:"<<res<<endl;

    return 0;

}