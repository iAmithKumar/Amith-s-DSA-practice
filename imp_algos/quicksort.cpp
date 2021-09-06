#include <iostream>
using std::endl;
using std::cout;
using std::cin;

void swap(int* a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr, int l, int h){
    int pivot, i, j;
    pivot = arr[h];
    i = l - 1;

    for(j=l; j<h; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i+1], &arr[h]);
    return (i+1);
}

void quickSort(int* arr, int l, int h){
    if(l < h){
        int p = partition(arr, l, h);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, h);
    }
}

int main(){
    int i, n;
    cout << "\nEnter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "\nEnter the array to be sorted: ";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);

    cout << "\nAfter Sorting: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    return 0;
}