//sorting of array of 0s,1s,2s
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number of elements in an array";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter elements:";
    cin>>arr[i];
  }
  int l=0;
  int m=0;
  int x=n-1;
  while(m<=x){
    if(arr[m]==0){
      swap(arr[l++],arr[m++]);
    }
    else if(arr[m]==1){
      m++;
    }
    else{
      swap(arr[m],arr[x--]);
    }
  }
  cout<<"sorted array";
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  
  return 0;
}
