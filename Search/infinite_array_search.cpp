#include <iostream>
using namespace std;

//here we will see how to search in an infinite array using log(n) time

int binarySearch(int arr[],int x, int low, int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int finding_ele(int arr[], int n, int x){
    if(arr[0]==x){
        return 0;
    }
    int i=1;        // here we started the iteration from 1 and checked the 0th idx case seperately.
    while(arr[i]<x){
        i=i*2;
        if(arr[i]==x){
            return i;
        }
    }
    // if at odd idx ele is not found then we do the bs for that
    binarySearch(arr,x,i/2+1,i-1);
    // here the low is i/2+1 and high is i-1


}


int main(){

    
	int arr[]
		= { 3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170 };
	int x = 10;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<finding_ele(arr,n,x);


    return 0;

}