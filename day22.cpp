#include <bits/stdc++.h>
using namespace std;

int firstElementKTimes(vector<int>& arr, int k) {
    unordered_map<int,int> freq;

    // Count frequency
    for(int x : arr) {
        freq[x]++;
    }

    // Check in original order
    for(int x : arr) {
        if(freq[x] == k) return x;
    }

    return -1; // no element found
}

int main() {
    vector<int> arr = {3, 1, 4, 4, 5, 2, 6, 1, 4};
    int k = 2;

    cout << firstElementKTimes(arr, k) << endl; // Output: 1
    return 0;
}
