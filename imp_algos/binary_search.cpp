#include <iostream>
using namespace std;

class Search{
public:
    int binarysearch(int arr[], int n, int k){

        int i;
        int low=0, high=(n-1), mid;
        
        while(low<=high){
            mid = (low+high)/2;
            
            if(arr[mid] == k){
                return mid;
            }
            else if(k > arr[mid] ){
                low = mid + 1;
            }
            else if(k < arr[mid]){
                high = mid - 1;
            }
        }
        
        return -1;
    }
};

int main()
{
        int N;
        cout << "Enter the size: ";
        cin >> N;

        int arr[N];
        cout << "Enter the array elements: ";
        for(int i=0;i<N;i++)
            cin >> arr[i];
        
        int key;
        cout << "Enter the key to be found: ";
        cin >> key;
        Search ob;
        int found = ob.binarysearch(arr, N, key);
        if(found == -1){
          cout << "Key not found" << endl;
        }
        else{
          cout << "Key found at position " << found+1 << endl;
        }
  return 0;
}
