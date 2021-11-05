#include <bits/stdc++.h>
using namespace std;

int findNext(vector<int> vec, int n, int key){
/*
  // Brute force, O(nlogn)
  sort(vec.begin(), vec.end());
  for(int i=0; i<n; i++){
    if(vec[i] > key){
      return vec[i];
    }
  }
*/

// Optimised approach, O(n)
  map<int, int> mp;
  for(int i=0; i<n; i++){
    if(vec[i] > key){
      mp[vec[i]] = vec[i];
    }
  }

  for(auto b : mp)
    return b.first;
  
  return -1;
}

int main(){
  vector<int> vec = {2,12,7,4,21,16,30,27};
  int n = vec.size(), key;

  cout << "Enter key whose next greater no to be found: ";
  cin >> key;

  n = findNext(vec, n, key);
  if(n == -1){
    cout << "Number not present!" << endl;
  }
  else{
    cout << "Next greater number is: " << n << endl;
  }

  return 0;
}