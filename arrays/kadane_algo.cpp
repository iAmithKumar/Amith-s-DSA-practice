// This algorithm is used to find the maximum contiguous sum of an array
#include <iostream>
#include <climits>
using namespace std;

int maxSum(int arr[], int n){
  int max = INT_MIN;
  int sum_so_far = 0;

  for(int i=0; i<n; i++){
    sum_so_far += arr[i];
    if(sum_so_far > max){
      max = sum_so_far;
    }

    if(sum_so_far<0){
      sum_so_far = 0;
    } 
  }

  return max;
}

int main(){
 int i, n;
 cout << "Enter the size: ";
 cin >> n;

 int arr[n];
 cout << "Enter the array elements: ";
 for(i=0; i<n; i++){
   cin >> arr[i];
 }

 int res = maxSum(arr,n);

 cout << "Max Possible contiguous sum: " << res << endl;

 return 0;
}