#include <bits/stdc++.h>
using namespace std;

void recurReverse(string &s, int i){
  int n = s.length();
  if(i == n/2)
    return;

  swap(s[i], s[n-i-1]);
  recurReverse(s, i+1);
}

int main(){
  string s = "Hello";
  cout << "Before Reversing: " << s << endl;
  recurReverse(s, 0);
  cout << "After Reversing: " << s << endl;
  return 0;
}

