#include <iostream>
using namespace std;
class Solution {
public:
    int equilibrium(int arr[], int n) {
        int totalSum = 0;
        for (int i = 0; i < n; i++)
            totalSum += arr[i];

        int leftSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum -= arr[i]; // Now totalSum is right sum

            if (leftSum == totalSum)
                return i;

            leftSum += arr[i];
        }
        return -1;
    }
};


int main() {
    Solution obj;
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << obj.equilibrium(arr, n); // Output: 3
    return 0;
}
