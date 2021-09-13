#include <bits/stdc++.h>
using namespace std;

//Second Approach ( Time = O(n) )
vector<int> negativesFirst(vector<int> &arr, int n){
  int low=0, mid=0;

  while(mid <= (n-1)){
    if(arr[mid] < 0){
      iter_swap(arr.begin()+low, arr.begin()+mid);
      low++; 
      mid++;
    }
    else{
      mid++;
    }
  }

  return arr;
}

// First Approach ( Time = O(n^2) )
/*
vector<int> negativesFirst(vector<int> &arr, int n){
  for(int j=0; j<n; j++){
    for(int i=1; i<n; i++){
      if(arr[i] < 0){
        iter_swap(arr.begin()+i, arr.begin()+(i-1));
      }
    }
  }
  return arr;
}
*/

int main(){
  int n, x;
  cin >> n;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin >> x;
    arr[i] = x;
  }

  vector<int> res = negativesFirst(arr, n);
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}