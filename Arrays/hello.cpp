#include <iostream>
#include <vector>
using namespace std;

int main(){

    cout << "Hello, World!" << endl;
    cout<<"here we will see the vectors"<<endl;
    vector <int> v;

    //displaying the vector elements
    for(auto i=v.begin();i!=v.end();++i){
        cout<<*i<<endl;
    }

    // creating a vector iterator
    vector <int> arr={1,2,3,4,5};
    vector <int> :: iterator ptr;
    cout<<"the vector elements are"<<endl;
    for(ptr=arr.begin();ptr!=arr.end();ptr++){
        cout<<*ptr<<endl;
    }
    return 0;

}


