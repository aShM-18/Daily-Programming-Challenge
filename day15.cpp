#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longestUniqueSubstring(string s) {
    int n = s.size(), l = 0, ans = 0;
    unordered_map<char,int> mp;
    for (int r = 0; r < n; r++) {
        mp[s[r]]++;
        while (mp[s[r]] > 1) {
            mp[s[l]]--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    return ans;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << longestUniqueSubstring(s) << endl;
}
