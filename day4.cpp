#include <iostream>
#include <vector>
using namespace std;
void mergeArrays(vector<int>& arr1, vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();
    int gap = (m + n + 1) / 2;

    cout << "Starting in-place merge of two sorted arrays...\n";

    while (gap > 0) {
        cout << "\nCurrent gap: " << gap << endl;

        int i = 0, j = gap;
        while (j < m + n) {
            int &a = (i < m) ? arr1[i] : arr2[i - m];
            int &b = (j < m) ? arr1[j] : arr2[j - m];

            cout << "Comparing " << a << " and " << b;
            if (a > b) {
                cout << " -> swapping";
                swap(a, b);
            }
            cout << endl;

            i++; j++;
        }
        if (gap == 1) gap = 0;
        else gap = (gap + 1) / 2;
    }
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    cout << "Initial arr1: ";
    for (int x : arr1) cout << x << " ";
    cout << "\nInitial arr2: ";
    for (int x : arr2) cout << x << " ";
    cout << endl;

    mergeArrays(arr1, arr2);

    cout << "\nFinal merged arrays:\n";
    cout << "arr1 = ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2 = ";
    for (int x : arr2) cout << x << " ";
    cout << endl;

    return 0;
}
