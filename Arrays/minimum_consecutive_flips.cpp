#include <iostream>
using namespace std;

bool printgroups(int arr[], int n){
    for(int i=1;i<n;i++){           // starting from the 1st idx
        if(arr[i-1]!=arr[i]){       // checking if i != i-1
            if(arr[i]!=arr[0]){     // checking if the element is same as arr[0] or not
                cout<<"From "<<i<<" to ";       // if not then report the starting idx
            }
            else{
                cout<<i-1<<endl;                // if yes the report its ending idx which is i-1
            }
        }
    }
    if(arr[n-1]!=arr[0]){                   // this is for the last case when the last element forms a differnt grp means not same as arr[0]
        cout<<n-1<<endl;                    // so instead going to loop we will report the final idx of it.
    }
}


int main(){

    // given array we need to flips the minimum number of bits to make it all 0 or all 1
    int arr[]={1,0,0,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    printgroups(arr,n);

    return 0;

}