#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int gcd(int a,int b){
  //Divides 0
  if(a==0){
    return b;
  }
  if(b==0){
    return a;
  }

  //Base case
  if(a==b){
    return a;
  }

  //Recursion
  if(a>b){
    return gcd(a-b, b);
  }
  else{
    return gcd(a, b-a);
  }
}

int main(){
  int a, b;
  cout << "Enter the two numbers: ";
  cin >> a;
  cin >> b;

  int res = gcd(a, b);

  cout << "The GCD of " << a << " and " << b << " is: " << res << endl;

  return 0; 
}
