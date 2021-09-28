#include <iostream>
using namespace std;

int main(){
  string inp;
  cout << "Enter the string: ";
  cin >> inp;

  int i=0, ans=0, opt=0;
  while(i<inp.size()){
    if(inp[i]>=65 && inp[i]<=90){
      opt = ((inp[i]-65)%4)+1;
      if(opt == 0){
        opt = 1;
      }
    }
    else if(inp[i]>=97 && inp[i]<=122){
      opt = ((inp[i]-97)%4)+1;
      if(opt == 0){
        opt = 1;
      }
    }
    else{
      cout << "invalid data" << endl;
      return 0;
    }
    ans += opt;
    i++;
  }

  cout << ans*inp.size() << endl;

  return 0;
}