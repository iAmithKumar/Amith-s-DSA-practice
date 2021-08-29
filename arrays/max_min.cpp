#include <iostream>
using namespace std;

void minAndMax(int arr[], int n){
  int i, max=arr[0], min=arr[0];
  for(i=0; i<n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
    if(arr[i] < min){
      min = arr[i];
    }
  }

  cout << "Min: " << min << " and Max: " << max << endl;
}

int main(){
  int n;
  cout << "Enter the size: ";
  cin >> n;

  int arr[n];
  cout << "Enter array elements: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  minAndMax(arr, n);

  return 0;
}

