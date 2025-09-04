#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int> &s, int x) {
    if(s.empty()) { s.push(x); return; }
    int t = s.top(); s.pop();
    insertBottom(s, x);
    s.push(t);
}

void reverse(stack<int> &s) {
    if(s.empty()) return;
    int t = s.top(); s.pop();
    reverse(s);
    insertBottom(s, t);
}

int main() {
    stack<int> s;
    s.push(1); s.push(2); s.push(3); s.push(4);

    reverse(s);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}
