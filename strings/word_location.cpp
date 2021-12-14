#include<bits/stdc++.h>
using namespace std;

int loc(string s, string word){
  int pos;
  vector<string> vec;
  string temp = "";
  for(int i=0; i<s.length(); i++){
    if(s[i] != ' '){
        temp += s[i];
    }
    else{ 
      vec.push_back(temp);
      temp = "";
    }

    if(i == s.length()-1){
      vec.push_back(temp);
    }
  }

  for(int i=0; i<vec.size(); i++){
    if(vec[i] == word){
      return i;
    }
  }

  return 0;
}

int main(){
  string s = "geeksforgeeks is best for geeks";
  string word = "the";
  if(loc(s, word)){
    cout << "word found at index: " << loc(s, word) << endl;
  }
  else{
    cout << "Word not found" << endl;
  }
  
  return 0;
}