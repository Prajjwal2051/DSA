#include <iostream>
using namespace std;

int sqaureRoot(int n){
    int low=1,high=n, ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==n){
            return mid;
        }
        else if(msq>n){
            high=mid-1;
        }
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;  
}


int main(){

    cout<<sqaureRoot(74)<<endl;

    return 0;

}