#include <iostream>
using namespace std;

// int max_consecutive_ones(int arr[], int n){
//     int count_arr[n];
//     int count=0;
//     for(int i =0;i<n;i++){
//         if(arr[i]==1){
//             count+=1;
//             count_arr[i]=count;
//         }
//         else{
//             count=0;
//             count_arr[i]=count;
//         }
//     }
//     int maxElement = count_arr[0];  // Assume first element is max
//     for (int i = 1; i < n; i++) {
//         if (count_arr[i] > maxElement) {
//             maxElement = count_arr[i];  // Update max if current element is larger
//         }
//     }
//     return maxElement;
    

// }

// using the method 2

int max_consecutive_ones(int arr[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            if(arr[j]==1){
                curr++;
            }
            else{
                break;
            }
        }
        res=max(curr,res);
    }
    return res;
}



int main(){

    int arr[]={0,1,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=max_consecutive_ones(arr,n);
    cout<<max<<endl;



    return 0;

}