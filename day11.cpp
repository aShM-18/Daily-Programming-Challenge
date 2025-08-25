#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(string &s, vector<bool> &used, string &curr, vector<string> &res) {
    if (curr.size() == s.size()) {
        res.push_back(curr);
        return;
    }
    for (int i = 0; i < s.size(); i++) {
        if (used[i]) continue;
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;
        used[i] = true;
        curr.push_back(s[i]);
        backtrack(s, used, curr, res);
        curr.pop_back();
        used[i] = false;
    }
}

vector<string> permuteUnique(string s) {
    vector<string> res;
    sort(s.begin(), s.end());
    vector<bool> used(s.size(), false);
    string curr = "";
    backtrack(s, used, curr, res);
    return res;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    vector<string> ans = permuteUnique(s);
    cout << "Permutations:\n";
    for (auto &p : ans) cout << p << "\n";
    return 0;
}
