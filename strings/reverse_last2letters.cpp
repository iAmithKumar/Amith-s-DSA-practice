#include <iostream>
#include <string.h>

using namespace std;

string reverseLastLetters(string s){
  int len = s.length();
  string ans = "";

  ans += s[len-1];
  ans += ' ';
  ans += s[len-2];

  return ans;
  
}

int main(){
  string s;
  cin >> s;

  string res = reverseLastLetters(s);
  cout << res << endl;

  return 0;
}
