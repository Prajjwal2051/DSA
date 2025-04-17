#include <iostream>
using namespace std;

int terenary_search(int l, int r, int key,int arr[]){
    // here l =0 and r = n-1
    if(r>=l){
        // finding the mid 1 and mid 2
        int mid1=l+(r-l)/3;
        int mid2=r-(r-l)/3;

        // check if the key is present in the array or not
        if(arr[mid1]==key){
            return mid1;
        }
        if(arr[mid2]==key){
            return mid2;
        }

        // since key is not present at the mid
        // check in which region it is present
        if(key<arr[mid1]){
            return terenary_search(l,mid1-1,key,arr);
        }
        else if(key>arr[mid2]){
            return terenary_search(mid2+1,r,key,arr);
        }
        else{
            return terenary_search(mid1+1,mid2-1,key,arr);
        }
    }
    return -1;
}


int main(){

    int arr[]={1,2,30,40,50};       // array should be sorted only
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=30;
    int res1=terenary_search(0,n-1,key,arr);
    cout<<res1<<endl;

    return 0;

}