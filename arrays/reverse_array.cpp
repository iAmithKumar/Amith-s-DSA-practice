#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr;
  int i, n, x;
  cout << "Enter the size: ";
  cin >> n;
  cout << "Enter the values: ";
  for(i=0; i<n; i++){
    cin >> x;
    arr.push_back(x);
  }

  for(i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}