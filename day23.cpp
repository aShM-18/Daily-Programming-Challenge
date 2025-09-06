#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxInWindow(vector<int>& nums, int k) {
    deque<int> q;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        if (!q.empty() && q.front() <= i - k) q.pop_front();
        while (!q.empty() && nums[q.back()] < nums[i]) q.pop_back();
        q.push_back(i);
        if (i >= k - 1) ans.push_back(nums[q.front()]);
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> res = maxInWindow(arr, k);
    for (int x : res) cout << x << " ";
}
