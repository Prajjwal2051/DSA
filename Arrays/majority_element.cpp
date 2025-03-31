#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Naive method to find the majority element (O(n^2) time complexity)
int majority_element_naive(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0; // Reset count for each element
        for (int j = 0; j < n; j++) { // Compare with all elements
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > n / 2) { // Check if count exceeds half the size
            return arr[i]; // Return the majority element
        }
    }
    return -1; // Return -1 if no majority element is found
}

// Class to implement Moore's Voting Algorithm
class solution {
public:
    int majority_element_effecient(vector<int> &nums) {
        int candidate = nums[0], count = 1; // Assume the first element is the majority

        // Step 1: Find the candidate
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }

        // Step 2: Verify the candidate
        count = 0;
        for (int i : nums) {
            if (i == candidate) {
                count++;
            }
        }
        if (count > nums.size() / 2) {
            return candidate; // Return the majority element
        }
        return -1; // Return -1 if no majority element exists
    }
};

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the naive method
    int result1 = majority_element_naive(arr, n);
    cout << "Naive Result: " << result1 << endl;

    // Call the efficient method
    solution sol;
    vector<int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int result2 = sol.majority_element_effecient(nums);
    cout << "Efficient Result: " << result2 << endl;

    return 0;
}