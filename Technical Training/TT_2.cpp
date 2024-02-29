#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leftRotation(vector<int> &arr, int d){
  rotate(arr.begin(), arr.begin() + d, arr.end());
}
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;

  vector<int> arr(n);
  cout<<"Enter the elements of the array: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int d;
  cout<<"Enter the rotation steps you want to perform: ";
  cin>>d;
  leftRotation(arr, d);

  cout<<"Printing the array:-"<<endl;
  for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}