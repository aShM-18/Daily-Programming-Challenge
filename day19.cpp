#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    stack<long long> st;
    string x;
    while(ss>>x){
        if(x=="+"||x=="-"||x=="*"||x=="/"){
            long long b=st.top(); st.pop();
            long long a=st.top(); st.pop();
            if(x=="+") st.push(a+b);
            else if(x=="-") st.push(a-b);
            else if(x=="*") st.push(a*b);
            else st.push(a/b);
        }else st.push(stoll(x));
    }
    cout<<st.top();
}
