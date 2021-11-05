#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
  string arr = argv[1];
	//int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = arr.length();

  int res = 0;
	
	// For every element of the array
	for (int i = 1; i < n-1; i++) {
		
		// Find the maximum element on its left
		int left = int(arr[i]);
		for (int j=0; j<i; j++)
		left = max(left, int(arr[j]));
		
		// Find the maximum element on its right
		int right = int(arr[i]);
		for (int j=i+1; j<n; j++)
		right = max(right, int(arr[j]));
		
	// Update the maximum water
	  res = res + (min(left, right) - int(arr[i]));
	}
	
  cout << res << endl;
  return 0;
}
