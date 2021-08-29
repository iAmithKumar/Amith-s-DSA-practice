#include<iostream>
#include<cstring>
using namespace std;

string reverseString(string str){
  int i, n=str.length();
  for(i=0; i<n; i++){
    if(i<n/2){
      char temp = str[i];
      str[i] = str[n-i-1];
      str[n-i-1] = temp;
    }
  }
  return str;
}

int main(){
  string str, st;
  cout << "Enter the string: ";
  cin >> str;

  st = reverseString(str);

  cout << "After reversing: ";
  cout << st << endl;
  return 0;
}