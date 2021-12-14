/*
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).
*/

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool findDouble(vector<int>& vec){
  unordered_set<int> s;
  for(int i : vec){
    if( s.count(i*2) || (i%2==0 && s.count(i/2)) ){
      return true;
    }
    s.insert(i);
  }

  return false;
}

int main(){
  vector<int> vec = {-2, -3, 6, 0, 4, 10, 17};
  if( findDouble(vec) ){
    cout << "TRUE" << endl;
  }
  else{
    cout << "FALSE" << endl;
  }

  return 0;
}