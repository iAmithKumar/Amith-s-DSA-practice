#include <iostream>
#include <map>
#include <vector>
using namespace std;

void removeDups(vector<int> arr){
  map<int,int> mp;
  int i = 0;

  for(auto a : arr){
    mp[a]++;
  }

  cout << "After removing duplicates: ";
  for(auto it=mp.begin(); it!=mp.end(); it++){
    cout << it->first << " ";
    arr[i++] = it->first;
  }
  cout << endl;

}

int main(){

  vector<int> arr = {1,1,3,2,5,6,5};

  cout << "Before removing duplicates: ";
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  removeDups(arr);

  return 0;
}