// hellodealdearhellodealdear and dearhellodeal

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
        cout << j << " " << s2[j] << " " << i << " " << temp[i] << endl;
        i += 1;
        flag = false;
        break;
      }else{
        i++;
        flag = true;
      }
    }
  }

  return flag;
}

int main(){
  string s1, s2;
  cout << "Enter source string: ";
  cin >> s1;
  cout << "Enter query string: ";
  cin >> s2;

  if(subs(s1, s2)){
    cout << s2 << " is a substring of " << s1 << endl; 
  }
  else{
    cout << s2 << " is not a substring of " << s1 << endl; 
  }

  return 0;
}