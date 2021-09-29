#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void howToSort();
void pali(string a);

int main(void){

	// Sorting (Ascending)
	howToSort();

	// Palindrome.
    string a;
    cout << "Enter the string: ";
    cin >> a;
    pali(a);
      

}

void howToSort(){
	int a[5];
	cout<<"Enter the elements to be sorted"<<endl;
	for(int i=0; i<5; i++){
		cin>>a[i];
	}
	// STL to sort array elements.
	std::sort(a, a+5);
	cout<<"Elements after sorting"<<endl;
	for(int i=0; i<5; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void pali(string a){
    int i,j;
    for(i=0, j=a.length()-1; i<a.length(); i++, j--){
        if(a[i] != a[j]){
            break;
        }
    }

    if( i!= a.length() ){
        cout << "---- Not a palindrome String -----"<< endl;
    }
    else{
        cout <<"---- Palindrome String ----"<< endl;
    }
    cout << endl;
}