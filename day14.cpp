#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int atMost(string s, int k) {
    int n = s.size(), l = 0, ans = 0;
    unordered_map<char,int> mp;
    for (int r = 0; r < n; r++) {
        mp[s[r]]++;
        while (mp.size() > k) {
            mp[s[l]]--;
            if (mp[s[l]] == 0) mp.erase(s[l]);
            l++;
        }
        ans += (r - l + 1);
    }
    return ans;
}

int countExactlyK(string s, int k) {
    if (k == 0) return 0;
    return atMost(s, k) - atMost(s, k - 1);
}

int main() {
    string s; int k;
    cout << "Enter string: ";
    cin >> s;
    cout << "Enter k: ";
    cin >> k;
    cout << countExactlyK(s, k) << endl;
}
