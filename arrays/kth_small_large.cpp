//Find the "Kth" max and min element of an array 
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int kthSmallest(map<int, int> m, int k){
  int sum=0;
  for(auto i=m.begin(); i!=m.end(); i++){
    sum += i->second;
    if(sum >= k){
      return i->first;
    }
  }
  return -1;
}

int kthLargest(map<int, int> m, int k){
  int sum=0;
  for(auto i=m.end(); i!=m.begin(); i--){
    sum += i->second;
    if(sum >= k){
      return i->first;
    }
  }
  return -1;
}

int main(){
  int i, n, x;
  vector<int> arr;
  cout << "Enter the size: ";
  cin >> n;
  cout << "Enter the elements: ";
  for(i=0; i<n; i++){
    cin >> x;
    arr.push_back(x);
  }

  map<int, int> m;
  for(i=0; i<n; i++){
    m[arr[i]] += 1;
  }

  int ks;
  cout << "Enter the value of k to find kth smallest: ";
  cin >> ks;

  int kl;
  cout << "Enter the value of k to find kth largest: ";
  cin >> kl; 

  int resSmall = kthSmallest(m, ks);
  int resLarge = kthLargest(m, kl);
  if(resSmall>0){
    cout << ks <<" smallest element is: " << resSmall << endl;
  }
  else{
    cout << "Invalid input for kSmall" << endl;
  }

  if(resLarge>0){
    cout << kl <<" largest element is: " << resLarge << endl;
  }
  else{
    cout << "Invalid input for kLarge" << endl;
  }

  return 0;
}