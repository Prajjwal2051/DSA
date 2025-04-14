#include <iostream>

using namespace std;

int maximum_occured_element(int l[], int r[], int n){
    int freq[100]={0}; // initilaising all the elements of the freq to 0;
    for(int i=0;i<n;i++){
        for(int j=l[i];j<=r[i];j++){
            freq[j]++;
        }
    }

    int maxFreq=freq[0];
    int res=0;
    for(int i=1;i<100;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            res=i;
        }
    }
    return res;
}



int main(){

    int L[] = {1, 5, 9, 13, 21};
    int R[] = {15, 8, 12, 20, 30};
    int n = sizeof(L) / sizeof(L[0]);

    cout << maximum_occured_element(L, R, n) << endl;
    cout<<maximum_occured_element_effecient(L,R,n)<<endl;

    return 0;

}