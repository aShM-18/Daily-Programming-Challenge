#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int,int>> zeroSumSubs(vector<int>& v) {
    vector<pair<int,int>> res;
    unordered_map<long long, vector<int>> mp;
    long long s = 0;

    for (int i = 0; i < v.size(); i++) {
        s += v[i];

        if (s == 0) res.push_back({0, i});

        if (mp.count(s)) {
            for (int idx : mp[s]) {
                res.push_back({idx + 1, i});
            }
        }

        mp[s].push_back(i);
    }
    return res;
}

int main() {
    vector<int> v = {1, 2, -3, 3, -1, 2};
    vector<pair<int,int>> ans = zeroSumSubs(v);

    if (ans.empty()) {
        cout << "No zero sum subarray\n";
    } else {
        for (auto &p : ans) {
            cout << "(" << p.first << ", " << p.second << ")\n";
        }
    }
    return 0;
}
