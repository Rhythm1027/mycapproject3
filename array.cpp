#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Number of elements you want to enter"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"You entered:";
int* p = arr;
for(int i=0;i<n;i++){
    cout<<*(p+i)<<endl;
}

return 0;
}