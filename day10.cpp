#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for (auto& s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }
    vector<vector<string>> ans;
    for (auto& p : mp) ans.push_back(p.second);
    return ans;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) cin >> strs[i];

    vector<vector<string>> res = groupAnagrams(strs);

    cout << "Grouped Anagrams = [";
    for (int i = 0; i < res.size(); i++) {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++) {
            cout << "\"" << res[i][j] << "\"";
            if (j < res[i].size() - 1) cout << ", ";
        }
        cout << "]";
        if (i < res.size() - 1) cout << ", ";
    }
    cout << "]\n";
    return 0;
}
