#include <iostream>
using namespace std;

// using the binary search recursive way

int firstOcc_recursive(int arr[], int low, int high, int key){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(key>arr[mid]){
        return firstOcc_recursive(arr,mid+1,high,key);
    }
    else if(key<arr[mid]){
        return firstOcc_recursive(arr,low,mid-1,key);
    }
    else{
        if((mid==0) || (arr[mid+1] != arr[mid])){
            return mid;
        }
        else{
            return firstOcc_recursive(arr,mid+1,high,key);
        }
    }
}

// now for the iterative method

int firstOcc_iterative(int arr[], int low, int high, int key){
    while(low<=high){
        int mid=(low+mid)/2;
        if(key>arr[mid]){
            low=mid+1;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else{
            if ((mid==0) || (arr[mid+1]!=arr[mid])){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}



int main(){

    int arr[] = { 1,2,2,2,5,5,6,8,9};
	int n = sizeof(arr) / sizeof(arr[0]);
    int key=2;
    int low=0;
    int high=n-1;
    cout << "Index of a peak point is " << firstOcc_recursive(arr,low,high,key)<<endl;
    cout << "Index of a peak point is " << firstOcc_iterative(arr,low,high,key)<<endl;

    return 0;

}