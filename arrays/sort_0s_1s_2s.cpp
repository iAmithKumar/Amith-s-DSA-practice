#include <iostream>
#include <vector>
using namespace std;

void sortAll(vector<int> &arr, int n){
  int i, cnt0=0, cnt1=0, cnt2=0;
  // Obtaining the count of 0s, 1s and 2s
  for(int i=0; i<n; i++){
    if(arr[i] == 0){ cnt0++; }
    else if(arr[i] == 1){ cnt1++; }
    else { cnt2++; }
  }

  i=0;
  while(cnt2 > 0){
    if(cnt0>0){
      arr[i] = 0;  i++;  cnt0--;
      continue;
    }
    else if(cnt1>0){
      arr[i] = 1;  i++;  cnt1--;
      continue;
    }
    else{
      arr[i] = 2;  i++;  cnt2--;
    }
  }
}

int main(){
  int i, n, x;
  vector<int> arr;
  cout << "Enter the size: ";
  cin >> n;
  cout << "Enter the 0s 1s and 2s: ";
  for(i=0; i<n; i++){
    cin >> x;
    arr.push_back(x);
  }

  sortAll(arr, n);

  cout << "After sorting: ";
  for(i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;

}