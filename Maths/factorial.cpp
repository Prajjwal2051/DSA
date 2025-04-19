#include <iostream>
using namespace std;

int factorial_iterative(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int factorial_recursive(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial_recursive(n-1);
    }
}


int main(){

    cout<<factorial_iterative(5)<<endl;
    cout<<factorial_recursive(5)<<endl;

    return 0;

}