#include <iostream>
using namespace std;

// here we will use the naive method, which is O(n^2) time complexity
int majority_element_naive(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
        return i;
        }
    }
        
    return -1;
}

int main(){

    int arr[]={8,3,4,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result1=majority_element_naive(arr,n);
    cout<<result1<<endl;

    return 0;

}