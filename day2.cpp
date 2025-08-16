#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of elements in array:";
  cin>>n;
  vector<int>arr(n-1);
  long long sum=0;
  for(int i=0;i<n-1;i++){
   cin>>arr[i];
    sum+=arr[i];
  }
  long long total=1LL*n*(n+1)/2;
  cout<<"Missing number in array is :"<<(total-sum);
  return 0;
}
