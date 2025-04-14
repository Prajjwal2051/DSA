#include <iostream>
#include <vector>
using namespace std;

class solution {
    public:
    // here we created a function which calaculates and gives the prefix sum array.
        vector <int> computePrefixSum(vector <int> &arr){
            int n=arr.size();
            vector <int> prefixSum(n);
            prefixSum[0]=arr[0];

            for(int i=1;i<n;i++){
                prefixSum[i]=prefixSum[i-1]+arr[i];
            }

            return prefixSum;
        }
        // here if we see this function only then we have only performed only + and - so it is in constant time.
        int getSum(vector <int> &prefixSum, int l, int r){
            if(l==0){
                return prefixSum[r];
            }
            else{
                return prefixSum[r]-prefixSum[l-1];
            }
        }
};

int main(){

    vector <int> arr={2,8,3,9,6,5,4};
    solution sol;
    // here we have got all the prefix sum
    vector <int> prefixSum=sol.computePrefixSum(arr);       

    cout << "Sum from 2 to 6: " << sol.getSum(prefixSum, 2, 6) << endl;
    cout << "Sum from 0 to 2: " << sol.getSum(prefixSum, 0, 2) << endl;
    cout << "Sum from 1 to 3: " << sol.getSum(prefixSum, 1, 3) << endl;

    return 0;

}