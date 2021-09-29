#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int facto(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * facto(n-1);
    }
}

int main(){
    int n;
    cout << "\nEnter the number:  ";
    cin >> n;

    if(n>0){
        cout << "Facotial of " << n << " is: " << facto(n) << "\n\n";
    }
    else{
        cout << "Invalid input\n\n"; 
    }
    

    return 0;
}