#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArr(vector<int> &arr){
  reverse(arr.begin(), arr.end());
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

  reverseArr(arr);

  cout<<"Printing the array:-"<<endl;
  for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}