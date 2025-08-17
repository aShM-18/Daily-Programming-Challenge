#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    
    vector<int>arr(n+1);
    cout << "Enter " << n+1 << " elements (values between 1 and " << n << "):\n";
    for(int i=0;i<=n;i++){
     cout<<"Enter elements:";
      cin >> arr[i];
    }

    int x=arr[0], y=arr[0];
    do{
        x=arr[x];
        y=arr[arr[y]];
    }while(x!=y);

    y=arr[0];
    while(x!=y){
        x=arr[x];
        y=arr[y];
    }

    cout << "Duplicate number: " << x << endl;
    return 0;
}
