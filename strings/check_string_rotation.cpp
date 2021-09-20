#include <iostream>
using namespace std;

bool subs(string temp, string s2){
  bool flag = false;
  int l2 = s2.length(), l1=temp.length();
  int i=0;

  // Traversing and checking.
  while(i <= (l1-l2)){
    for(int j=0; j<l2; j++){
      if(s2[j] != temp[i]){
        i++;
        flag = false;
        break;
      }
      i++;
      flag = true;
    }
  }

  return flag;
}

bool checkRotation(string s1, string s2){
  string temp = s1 + s1;
  
  return subs(temp, s2); // A bit lengthy uproach
  //return (temp.find(s2) != string::npos); // Direct uproach
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
    cout << endl << "Strings are roatation of each other" << endl;
  }
  else{
    cout << endl << "Strings are NOT roatation of each other" << endl;
  }

  return 0;
}