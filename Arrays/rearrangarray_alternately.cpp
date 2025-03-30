#include <iostream>
#include <vector>
#include <algorithm> // for max_element
using namespace std;

class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n = arr.size();
        int min_i = 0, max_i = n - 1;
        
        // Choose max_e greater than the maximum element
        int max_e = *max_element(arr.begin(), arr.end()) + 1;

        // Encoding step
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr[i] += (arr[max_i] % max_e) * max_e;
                max_i--;
            } else {
                arr[i] += (arr[min_i] % max_e) * max_e;
                min_i++;
            }
        }

        // Decoding step
        for (int i = 0; i < n; i++) {
            arr[i] /= max_e;
        }
    }
};

// Driver function for testing
int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    
    sol.rearrange(arr);
    
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
957 92 946 289 890 447 783 483 550 519
