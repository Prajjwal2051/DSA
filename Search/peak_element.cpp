#include <iostream>
using namespace std;

int findPeak(int arr[], int n){
    // first or last element is the peak element
    if(n==1){
        return 0;
    }
    if (arr[0]>=arr[1]){
        return 0;
    }
    if (arr[n-1]>=arr[n-2]){
        return n-1;
    }

    // now checking it for 1 to n-1
    for(int i=1;i<n-1;i++){
        // checking it for the neighbours
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            return i;
        }
    }
}

/* another method can be done by binary search
check for the middle element in the array using binary search now see if it is peak element or not
if yes return i if not see it is in low or mid then perform the same operatrion */

int main(){

    int arr[] = { 1, 3, 20, 4, 1, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Index of a peak point is " << findPeak(arr, n);

    return 0;

}