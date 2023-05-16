#include <iostream>
//Rafi Abiyyu Ramadhan - A11.2022.14351
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i=0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int max_idx = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        swap (arr[i], arr[max_idx]);
    }
}

//Contoh Pemanggilan di program main body
int main(){
    int arr[] = {3,1,2,5,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    //BubbleSort
    bubbleSort(arr, n);
    cout << "Hasil Bubble Sort: ";
    for (int i= 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //SelectionSort
    selectionSort(arr, n);
    cout << "Hasil Selection Sort: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

return 0;
}
