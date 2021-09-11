// Find the number of set bits in the binary notation of a number.
// Find the most significant set bit.
// Find the least significant set bit.

#include <iostream>
using namespace std;

string bitsSet(int n){
  string s = "";
  int cnt=0, lsb, msb, i=0;
  int binaryNum[32];
 
  while (n > 0) {
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }

  cout << "Binary representation: ";
  for (int j = i - 1; j >= 0; j--){
    cout << binaryNum[j];
  }
  cout << endl;
 
  for (int j = i - 1; j >= 0; j--){
    if(binaryNum[j] == 1){
      cnt += 1;
    }
  }
  s += to_string(cnt) + " # ";

  for (int j = i - 1; j >= 0; j--){
    if(binaryNum[j] == 1){
      msb = j;
      break;
    }
  } 
  s += to_string(msb) + " # ";

  for (int j = 0; j<i; j++){
    if(binaryNum[j] == 1){
      lsb = j;
      break;
    }
  }
  s += to_string(lsb);

  return s;
}

int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;

  string res = bitsSet(n);

  cout << "COUNT # MSB # LSB: " << res << endl;

  return 0;
}