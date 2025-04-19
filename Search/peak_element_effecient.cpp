#include <iostream>
using namespace std;

// this is the effecient solution of finding the peak element

int getPeak(int arr[], int n){
    int low=0, high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if (((mid==0) || (arr[mid-1]<=arr[mid])) && ((mid==n-1) || (arr[mid]>=arr[mid+1]))){
            return mid;
        }
        if(mid>0 && arr[mid-1]>=arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){

    int arr[] = { 1, 3, 20, 4, 1, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Index of a peak point is " << getPeak(arr, n);

    return 0;

}