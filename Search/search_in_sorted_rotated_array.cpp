#include <iostream>
using namespace std;

int search(int arr[], int n,int key){
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[low]<=arr[mid]){    // means left half of the Array is sorted
            if(key<arr[mid] && key>=arr[low]){   // if the key lies in the range then good 
                high=mid-1;
            }
            else{
                low=mid+1;                      // otherwise go to the right half
            }
        }
        else{               // means right half of the Array is Sorted
            if(key>arr[mid] && key<=arr[high]){     // if the key lies in the range then good
                low=mid+1;
            }
            else{
                high=mid-1;                     // otherwise go the left half
            }
        }
    }
    return -1;

}

int main(){

    int arr[]={10,20,40,60,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    cout<<search(arr,n,key)<<endl;

    return 0;

}