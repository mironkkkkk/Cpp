#include <iostream>
using namespace std;

void stillArr(int**& arr) {
    int SIZE1 = _msize(arr) / sizeof(arr[0]);
    int SIZE2 = _msize(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE2; j++) {
            arr[i][j] = rand() % 9;
        }
    }
    
}

void showArr(int** arr) {
    int SIZE1 = _msize(arr) / sizeof(arr[0]);
    int SIZE2 = _msize(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void deleteColumn(int**& arr, int id) {

    int SIZE1 = _msize(arr) / sizeof(arr[0]);
    int SIZE2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int** arrBuf = new int*[SIZE1];

    for (int i = 0; i < SIZE1; i++) {
        arrBuf[i] = new int[SIZE2 - 1];
        for (int j = 0; j < id; j++) {
            arrBuf[i][j] = arr[i][j];
        }
        for (int j = id + 1; j < SIZE2; j++) {
            arrBuf[i][j - 1] = arr[i][j];
        }
    }

    for (int i = 0; i < SIZE1; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    arr = arrBuf;

}

void deleteRow(int**& arr, int index) {
    
    int size1 = _msize(arr) / sizeof(arr[0]);
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);

    int** arrBuf = new int* [size1 - 1];
    for (int i = 0; i < index; i++) {
        arrBuf[i] = arr[i];
    }
    for (int i = index + 1; i < size1; i++) {
        arrBuf[i - 1] = arr[i];
    }
    delete[] arr[index];
    delete[] arr;
    arr = arrBuf;
}

void extebdArr(int**& arr, int** arr2) {
    int arrsize1 = _msize(arr) / sizeof(arr[0]);
    int arrsize2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int arr2size1 = _msize(arr2) / sizeof(arr2[0]);

    int** arrBuf = new int* [arrsize1 + arr2size1];
    for (int i = 0; i < arrsize1; i++) {
        arrBuf[i] = arr[i];
    }

    for (int i = arrsize1; i < arrsize1 + arrsize2; i++) {
        arrBuf[i] = new int[arrsize2];
    }

    for (int i = arrsize1; i < arrsize1 + arr2size1; i++) {
        for (int j = 0; j < arrsize2; j++) {
            arrBuf[i][j] = arr2[i - arrsize1][j];
        }
    }

    delete[] arr;
    arr = arrBuf;
}


int main()
{

    srand(time(NULL));

    const int SIZE1 = 3;
    const int SIZE2 = 4;

    const int SIZE3 = 2;
    const int SIZE4 = 4;
    int** arr = new int* [SIZE1];
    for (int i = 0; i < SIZE1; i++)
    {
        arr[i] = new int[SIZE2];
    }
    int** arr2 = new int* [SIZE3];
    for (int i = 0; i < SIZE3; i++)
    {
        arr2[i] = new int[SIZE4];
    }
    stillArr(arr);
    stillArr(arr2);

    showArr(arr);
    showArr(arr2);

    extebdArr(arr, arr2);

    showArr(arr);
    showArr(arr2);

}

