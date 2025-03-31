#include <iostream>
using namespace std;


// this is the naive method
int max_even_odd(int arr[], int n){
    int res=1;
    for(int i=0;i<n;i++){
        int curr=1;
        for(int j=i+1;j<n;j++){
            if(((arr[j]%2==0) && (arr[j-1]%2!=0)) || ((arr[j]%2!=0) && (arr[j-1]%2==0))){
                curr++;
            }
            else{
                break;
            }
        }
        res=max(res,curr);
    }
    return res;
}

// effecient method using kadens algorithm

int max_even_odd_effecient(int arr[], int n){
    int res=1;
    int curr=1;
    for(int i=0;i<n;i++){
        if(((arr[i]%2==0) && (arr[i-1]%2!=0)) || ((arr[i]%2!=0) && (arr[i-1]%2==0))){
                curr++;
                res=max(res,curr);
            }
        else{
            curr=1;
        }
    }
    return res;
}

int main(){

    int arr[]={10,12,14,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    int result=max_even_odd(arr,n);
    cout<<result<<endl;


    int result2=max_even_odd_effecient(arr,n);
    cout<<result2<<endl;

    return 0;
    

}