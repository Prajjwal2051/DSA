#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

int maximumOccurredElement(int L[], int R[], int n) {
    int freq[MAX] = {0};

    int maxRange = -1;
    for (int i = 0; i < n; i++) {
        freq[L[i]] += 1;
        freq[R[i] + 1] -= 1;
        maxRange = max(maxRange, R[i]);
    }

    int maxFreq = freq[0], result = 0;
    for (int i = 1; i <= maxRange; i++) {
        freq[i] += freq[i - 1]; // prefix sum
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    return result;
}

int main() {
    int L[] = {1, 5, 9, 13, 21};
    int R[] = {15, 8, 12, 20, 30};
    int n = sizeof(L) / sizeof(L[0]);

    cout << maximumOccurredElement(L, R, n) << endl;
    return 0;
}
