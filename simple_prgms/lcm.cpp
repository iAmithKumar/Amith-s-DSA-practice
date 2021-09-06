//Formula -->   a*b = lcm * gcd

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

int lcm(int a, int b){
  return (a/gcd(a, b)) * b;
}

int main(){
  int a, b;
  cout << "Enter the two numbers: ";
  cin >> a;
  cin >> b;

  int res = lcm(a, b);

  cout << "The LCM of " << a << " and " << b << " is: " << res << endl;

  return 0; 
}