#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> inputArray(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> inputArray[i];
    }
    vector<int> leaderElements;
    int currentMax = inputArray[n - 1];
    leaderElements.push_back(currentMax);
    for(int i = n - 2; i >= 0; i--) {
        if(inputArray[i] > currentMax) {
            leaderElements.push_back(inputArray[i]);
            currentMax = inputArray[i];
        }
    }
    reverse(leaderElements.begin(), leaderElements.end());

    cout << "Leader elements are: ";
    for(int val : leaderElements) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
