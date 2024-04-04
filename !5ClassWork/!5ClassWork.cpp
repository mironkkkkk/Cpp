#include <iostream>
using namespace std;

void ShowArr(int**& arr) {
     int SIZE1 = _msize(arr) / sizeof(arr[0]);
     int SIZE2 = _msize(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int deleteArr(int**& arr, int index1, int index2) {
    int SIZE1 = _msize(arr) / sizeof(arr[0]);
    int SIZE2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int** arrBuf = new int*[SIZE1 - 1];
    for (int i = 0; i < index1 - 1; i++) {
        for (int j = 0; j < index2 - 1; j++) {
            arrBuf[i][j] = arr[i][j];
        }
    }
    for (int i = index1; i < SIZE1; i++) {
        for (int j = index2; j < SIZE2; j++) {
            arrBuf[i][j] = arr[i][j];
        }
    }
    delete[] arr;
    arr = arrBuf;
    
}

void rowArr(int**& arr, int n) {
    int SIZE1 = _msize(arr) / sizeof(arr[0]);
    int SIZE2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int**& arrBuf = new int* [SIZE1];
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < n; j++) {
            arrBuf[i][j] = arr[i][j];
        }
    }
    for (int i = n + 1; i < SIZE1; i++) {
        for (int j = n + 1; j < SIZE1; j++) {
            arrBuf[j--] = arr[j];
        }
    }
}

void strokeArr(int**& arr, int n) {
    int SIZE1 = _msize(arr) / sizeof(arr[0]);
    int** arrBuf = new int* [SIZE1 - 1];
    for (int i = 0; i < n; i++) {
        arrBuf[i] = arr[i];
    }
    for (int i = n + 1; i < SIZE1; i++) {
        arrBuf[i--] = arr[i];
    }
    delete[] arr[n];
    delete[] arr;
    arr = arrBuf;

}

int main()
{
     int SIZE1 = 7;
     int SIZE2 = 8;
        
    srand(time(NULL));
    int** arr = new int*[SIZE1];
    for (int i = 0; i < SIZE1; i++) {
        arr[i] = new int [SIZE2] {};
        for (int j = 0; j < SIZE2; j++) {
            arr[i][j] = 1 + rand() % 9;
        }
    }
    ShowArr(arr);
    rowArr(arr, 4);
    ShowArr(arr);

}


