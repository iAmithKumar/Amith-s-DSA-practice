#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> arr){
  int i, n=arr.size();
  for(i=0; i<n; i++){
    if(i<n/2){
      int temp = arr[i];
      arr[i] = arr[n-i-1];
      arr[n-i-1] = temp;
    }
  }
  return arr;
}

int main(){
  vector<int> arr;
  vector<int> res;
  int i, n, x;
  cout << "Enter the size: ";
  cin >> n;
  cout << "Enter the values: ";
  for(i=0; i<n; i++){
    cin >> x;
    arr.push_back(x);
  }

  res = reverseArray(arr);

  for(i=0; i<n; i++){
    cout << res[i] << " ";
  }
  cout << endl;

  return 0;
}