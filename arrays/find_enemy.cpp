#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int c1 = 0, p1, p2b=0, p2e=(n-1);
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            break;
        }
        c1++;
    }
    
    for(int j=0; j<n; j++){
        if(arr[j] == 2){
            break;
        }
        p2b++;
    }
    
    for(int k=n-1; k>=0; k--){
        if(arr[k] == 2){
            break;
        }
        p2e--;
    }
    
    if(p2e == 0 && p2b == 0){
        cout << "0" << endl;
        return 0;
    }
    
    if(abs(p2b-c1) < abs(p2e-c1)){
        cout << abs(p2b-c1) << endl;
    }
    else{
        cout << abs(p2e-c1) << endl;
    }
    
    return 0;
}