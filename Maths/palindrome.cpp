#include <iostream>
using namespace std;

// programm to check the plaindrome

bool check_plaindrome(int n){
    int temp=n;
    int rev=0;
    while(temp!=0){
        rev=(rev*10)+(temp%10);
        temp=temp/10;
    }
    return (rev==n);
}

int main(){

    cout<<check_plaindrome(1221)<<endl;
    cout<<check_plaindrome(12345)<<endl;

    return 0;

}