#include <iostream>
#include <vector>
using namespace std;

vector<int> unionResult(int *a, int *b, int n, int m){
  vector<int> res;
  int i=0, j=0;
  while(i<n && j<m){
    if(a[i] < b[j]){
      res.push_back(a[i]);
      i++;
    }
    else if(a[i] == b[j]){
      res.push_back(a[i]);
      i++;
      j++;
    }
    else if(a[i] > b[j]){
      res.push_back(b[j]);
      j++;
    }
  }

  while(i<n){
    res.push_back(a[i]);
    i++;
  }

  while(j<m){
    res.push_back(b[j]);
    j++;
  }

  return res;

}

vector<int> interResult(int *a, int *b, int n, int m){
  vector<int> res;
  int i=0, j=0;

  while(i<n && j<n){
    if(a[i] < b[j]){
      i++;
    }
    else if(a[i] == b[j]){
      res.push_back(a[i]);
      i++;
      j++;
    }
    else {
      j++;
    }
  }

  return res;
}

int main(){
  int n, m;
  cout << "Size of arrays A and B: ";
  cin >> n >> m;

  int a[n], b[m];
  cout << "Array A: ";
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  cout << "Array B: ";
  for(int i=0; i<m; i++){
    cin >> b[i];
  }
  cout << endl;

  vector<int> res1 = unionResult(a, b, n, m);
  vector<int> res2 = interResult(a, b, n, m);

  cout << "Union of A and B: ";
  for(int i=0; i<res1.size(); i++){
    cout << res1[i] << " ";
  }
  cout << endl;

    cout << "Intersection of A and B: ";
  for(int i=0; i<res2.size(); i++){
    cout << res2[i] << " ";
  }
  cout << endl;

  return 0;
}