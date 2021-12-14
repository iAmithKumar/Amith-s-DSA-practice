/*
Given a number n, find the smallest number that has same set of digits as n and is greater than n. If n is the greatest possible number with its set of digits, then print “not possible”.
*/
#include <bits/stdc++.h>
using namespace std;

void swap(char* a, char *b){
  char temp = *a;
  *a = *b;
  *b = temp;
}

void findNext(string s){
  int n = s.length(), i, j;

// Check for the larger number from right to left
  for(i=n-1; i>0; i--){
    if(s[i] > s[i-1])
      break;
  }

  if(i==0){
    cout << "Not Possible" << endl;
    return;
  }

/* find the smallest num from index where 
   larger num was found till end of string. */
  int x = s[i-1], small = i;
  for(j=i+1; j<n; j++){
    if( s[j] < s[small] && s[j] > x)
      small = j;
  }

  swap(&s[small], &s[i-1]);

  sort(s.begin()+i, s.end());

  cout << s << endl;

  return;
}

int main(){
  string s = "218765";
  findNext(s);
  return 0;
}