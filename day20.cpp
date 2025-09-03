#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &st, int x) {
    if (st.empty() || st.top() <= x) {
        st.push(x);
        return;
    }
    int topVal = st.top();
    st.pop();
    insertSorted(st, x);
    st.push(topVal);
}

void sortStack(stack<int> &st) {
    if (st.empty()) return;
    int topVal = st.top();
    st.pop();
    sortStack(st);
    insertSorted(st, topVal);
}

int main() {
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);

    sortStack(st);

    cout << "Sorted stack: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}
