#include <iostream>
using namespace std;

int count_digit(int n){
    if(n==0) return 1;
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}


int main(){

    cout<<count_digit(34000)<<endl;

    return 0;

}