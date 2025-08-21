#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of bars: ";
    cin >> n;

    vector<int> h(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) cin >> h[i];

    int l = 0, r = n - 1;
    int lmax = 0, rmax = 0, water = 0;

    while (l < r) {
        if (h[l] <= h[r]) {
            if (h[l] >= lmax) lmax = h[l];
            else water += lmax - h[l];
            l++;
        } else {
            if (h[r] >= rmax) rmax = h[r];
            else water += rmax - h[r];
            r--;
        }
    }

    cout << "Total trapped water = " << water << endl;
    return 0;
}
