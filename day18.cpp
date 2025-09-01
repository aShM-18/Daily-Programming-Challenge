#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int c = 0;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            if(i==n/i) c++;
            else c+=2;
        }
    }
    cout << c;
}
