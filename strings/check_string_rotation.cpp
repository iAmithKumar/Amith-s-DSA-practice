#include <iostream>
using namespace std;

bool checkRotation(string s1, string s2){
  string temp = s1 + s1;

  //return subs(temp, s2); // A bit lengthy uproach
  return (temp.find(s2) != string::npos); // Direct uproach
}

int main(){
  string s1, s2;
  cout << "Enter the source string: ";
  cin >> s1;

  cout << "Enter the query string: ";
  cin >> s2;

  if(s1.length()!=s2.length()){
    cout << "Not a rotation" << endl;
    return 0;
  }

  if(checkRotation(s1, s2)){
    cout << "Strings are roatation of each other" << endl;
  }
  else{
    cout << "Strings are NOT roatation of each other" << endl;
  }

  return 0;
}