#include <iostream>
using namespace std;

// Function to find the maximum circular subarray sum using a naive approach
int max_circular_naive(int arr[], int n) {
    int res = arr[0]; // Initialize result with the first element
    for (int i = 0; i < n; i++) {
        int curr_sum = arr[i]; // Start a new subarray from the current element
        int curr_max = arr[i]; // Track the maximum sum for the current subarray
        for (int j = 1; j < n; j++) {
            int idx = (i + j) % n; // Wrap around using modulo to handle circular nature
            curr_sum += arr[idx]; // Add the next element in the circular subarray
            curr_max = max(curr_sum, curr_max); // Update the maximum sum for this subarray
        }
        res = max(res, curr_max); // Update the overall maximum result
    }
    return res; // Return the maximum circular subarray sum
}

// Function to find the maximum sum of a normal (non-circular) subarray using Kadane's algorithm
int max_linear_sum_subarray(int arr[], int n) {
    int res = arr[0]; // Initialize result with the first element
    int maxending = arr[0]; // Track the maximum sum ending at the current position
    for (int i = 1; i < n; i++) {
        maxending = max(maxending + arr[i], arr[i]); // Extend or start a new subarray
        res = max(res, maxending); // Update the overall maximum result
    }
    return res; // Return the maximum normal subarray sum
}

// Function to find the maximum circular subarray sum using an efficient approach
int max_circular_sum_effecient(int arr[], int n) {
    int max_normal = max_linear_sum_subarray(arr, n); // Find the maximum normal subarray sum
    if (max_normal < 0) { // If all elements are negative, return the maximum normal sum
        return max_normal;
    }

    int arr_sum = 0; // Variable to store the total sum of the array
    for (int i = 0; i < n; i++) {
        arr_sum += arr[i]; // Calculate the total sum of the array
        arr[i] = -arr[i]; // Invert the array elements
    }

    // Find the maximum circular subarray sum by adding the total sum to the maximum inverted subarray sum
    int max_circular = max_linear_sum_subarray(arr, n) + arr_sum;
    return max(max_circular, max_normal); // Return the maximum of normal and circular subarray sums
}

int main() {
    int arr[] = {5, -2, 3, 4}, n = 4; // Example array and its size

    int result = max_circular_naive(arr, n); // Call the naive approach
    cout << result << endl; // Print the result of the naive approach

    int result2 = max_circular_sum_effecient(arr, n); // Call the efficient approach
    cout << result2 << endl; // Print the result of the efficient approach

    return 0; // End of the program
}