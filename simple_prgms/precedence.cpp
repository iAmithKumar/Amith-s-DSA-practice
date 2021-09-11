/* Given an array find the precendence of the queue starting from 0 index based on the array values. */

#include <iostream>
using namespace std;
int stud[100];

int *precedence(int arr[],int n){
    
    int k=0, i, j;
    for(i=0; i<n; i++){
        int t = 0;
        for(j=0; j<i; j++){
            if(arr[j] >= arr[i]){
                t += 1;
            }
        }
        stud[k] = t;
        k++;
    }
    
    return stud;
}

 int main(){
    int n, i;
    cout << "Input: " << endl;
    cin >> n;
    int arr[n], *res;
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    
    res = precedence(arr, n);
    
    cout << "Output: ";
    for(i=0; i<n; i++){
        cout << *(res+i) << " ";
    }
    cout << endl;
 }
