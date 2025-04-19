#include <iostream>
using namespace std;

int factorial_iterative(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int trailing_zero(int fact){
    int count=0;
    for(int i=5;fact>=i;i=i*5){
        count=count+(fact/i);
    }
    return count;
}


int main(){

    cout<<trailing_zero(3);

    return 0;

}