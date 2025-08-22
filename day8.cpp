#include <iostream>
using namespace std;

string reverseSentence(string s) {  
    string ans = "", word = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            word = s[i] + word;   
        } else if (!word.empty()) {
            if (!ans.empty()) ans += " ";
            ans += word;
            word = "";
        }
    }
    if (!word.empty()) {   
        if (!ans.empty()) ans += " ";
        ans += word;
    }
    return ans;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Reversed string = \"" << reverseSentence(s) << "\"\n";
    return 0;
}
