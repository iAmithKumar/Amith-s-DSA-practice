#include <iostream>
#include <unordered_map>

using namespace std;

// Using unordered map
string maxOccur(string s){
  string res = "";
  unordered_map<char, int> myMap;
  int n = s.length(), i=0;

  while(i < n){

    if(myMap.find(s[i]) != myMap.end()){
      int max = myMap[s[i]];
      int cnt = 0, j=i;

      while(s[j] == s[i]){
        cnt += 1;
        j++;
      }

      if(cnt > max){
        myMap[s[i]] = cnt;
      }
      
      i = j;
    }
    else{
      myMap[s[i]]++;
    }

  }

  for(auto i:myMap){
    res = res + i.first + to_string(i.second);
  }

  return res;
}

// Just iteration
string occurance(string s){
  string res = "";
  int cnt = 1;
  for(int i=1; i<=s.length(); i++){
    if(s[i-1] == s[i]){
      cnt += 1;
    }
    else{
      res += s[i-1] + to_string(cnt);
      cnt = 1;
    }
  }
/* // Tried something, is still incomplete
  s = "";
  for(int i=0; i<res.length(); i+=2){

    int max = res[i+1] - '0';
    for(int j=i+2; j<res.length(); j+=2){

      if(res[j] == res[i]){
        if(max < (res[j+1] - '0') && (j+2) >= res.length()){
          max = (res[j+1] - '0');
          s += res[i] + to_string(max);
          //res.erase(j, 2);
        }
      }
    }
  }

  cout << res << endl;
*/

  return res;
}

int main(){
  string s;
  cin >> s;

  string res1 = maxOccur(s);
  string res2 = occurance(s);

  cout << res1 << endl << res2 << endl;

  return 0;
}