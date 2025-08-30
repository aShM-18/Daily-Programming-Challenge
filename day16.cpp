#include <iostream>
using namespace std;

long long g(long long a,long long b){
    while(b){long long t=b;b=a%b;a=t;}
    return a;
}

long long l(long long a,long long b){
    return (a/g(a,b))*b;
}

int main(){
    long long n,m;
    cin>>n>>m;
    cout<<l(n,m);
}
