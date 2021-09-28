/* Given a binary number as a string check if the string contains same 2 consecutive binary bits repeating till the end. If valid then find the product of given binary and its reversed value in decimal.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string st1;
    cin >> st1;
    string st2=st1;
    
    int n=st1.size(), f=0;
    int i;
    
    reverse(st1.begin(), st1.end());
    
    for(i=0; i<n; i++){
        if(st1[i] != st1[i+2] && i+2<n){
            f=1;
            break;
        }
    }
    
    for(i=1; i<n-1; i++){
        if(st1[i] != st1[i+2] && i+2<n-1){
            f=1;
            break;
        }
    }
    if(f==0){
        cout << "valid" << endl;
    }
    else{
        cout << "invalid" << endl;
        return 0;
    }
    
    cout << st2 << endl;
    int res1 = stoi(st1, 0, 2);
    int res2 = stoi(st2, 0, 2);
    cout << res1*res2 << endl;
    
    return 0;
}