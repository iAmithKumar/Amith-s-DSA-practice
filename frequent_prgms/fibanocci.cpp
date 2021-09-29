#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void fibSeries(int n){
    static int n1=0, n2=1, n3;

    if(n>2){
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;

        fibSeries(n-1); 
    }
}

int fibAtN(int n){
    if(n==1){
        return 0;
    }

    if(n==2){
        return 1; 
    }

    while(n>1){
        return ( fibAtN(n-1) + fibAtN(n-2) );
    }
}

int main(){
    int n;
    cout << "\nEnter the level for fibanocci series: ";
    cin >> n;

    cout << "\nFibanocci number at " << n << " is: " << fibAtN(n) << "\n\n";

    cout << "\nFibanocci Series: 0 1 ";
    fibSeries(n);
    cout << "\n\n";

    return 0;
}