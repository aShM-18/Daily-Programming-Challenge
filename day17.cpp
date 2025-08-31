#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<long long> f;
    for(long long i=2;i*i<=n;i++){
        while(n%i==0){f.push_back(i);n/=i;}
    }
    if(n>1) f.push_back(n);
    for(int i=0;i<f.size();i++) cout<<f[i]<<" ";
}
