#include <iostream>
using namespace std;

void ShowArr(int* arr) {
    int size = _msize(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void appendAr(int*& arr, int n) {
    int size = _msize(arr) / sizeof(arr[0]);
    int* buf = new int[size + 1];
    for (int i = 0; i < size; i++) {
        buf[i] = arr[i];
    }
    buf[size] = n;
    delete[] arr;
    arr = buf;
}

void removeAr(int*& arr) {
    int size = _msize(arr) / sizeof(arr[0]);
    int* buf = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        buf[i] = arr[i];
    }
    delete[] arr;
    arr = buf;
}

void addArr(int*& arr, int n, int index) {
    int size = _msize(arr) / sizeof(arr[0]);
    int* buf = new int[size + 1];
    for (int i = 0; i < index; i++) {
        buf[i] = arr[i];
    }
    buf[index] = n;
    for (int i = index; i < size; i++) {
        buf[i+1] = arr[i];
    }
    delete[] arr;
    arr = buf;
}

void deleteArr(int*& arr, int n) {
    int size = _msize(arr) / sizeof(arr[0]);
    int* buf = new int[size - 1];
    for (int i = 0; i < n; i++) {
        buf[i] = arr[i];
    }
    for (int i = n; i < size; i++) {
        buf[i-1] = arr[i];
    }
    delete[] arr;
    arr = buf;
}

void addArray(int*& arrOne, int* arrTwo, int index) {
    int sizeTwo = _msize(arrTwo) / sizeof(arrTwo[0]);
    int sizeOne = _msize(arrOne) / sizeof(arrOne[0]);
    int* buf = new int[sizeOne + sizeTwo];
    for (int i = 0; i < index; i++) {
        buf[i] = arrOne[i];
    }
    for (int n = 0; n < sizeTwo; n++) {
        buf[index + n] = arrTwo[n];
    }
    for (int i = index; i < sizeOne; i++) {
        buf[sizeTwo + i] = arrOne[i];
    }
    delete[] arrOne;
    arrOne = buf;
}

void deleteArray(int*& arrOne, int* arrTwo) {
    int sizeTwo = _msize(arrTwo) / sizeof(arrTwo[0]);
    int sizeOne = _msize(arrOne) / sizeof(arrOne[0]);
    int counter = 0, finaly = 0;
    for (int i = 0; i < sizeOne; i++) {
        for (int j = 0; j < sizeTwo; j++) {
            if (arrOne[i] == arrTwo[j]) {
                counter++;
                break;
            }
        }
    }
    int* buf = new int[sizeOne - counter];
    for (int i = 0; i < sizeOne; i++) {
        int flag = false;
        for (int j = 0; j < sizeTwo; j++) {
            if ( arrOne[i] == arrTwo[j]) {
                flag = true;
                break;
            }
        }
        if (flag == false) {
            buf[finaly++] = arrOne[i];
        }
    }
        
    delete[] arrOne;
    arrOne = buf;
}



int main()
{
    int* arr = new int [5] {};
    int* arr2 = new int [2] {1, 2};
    appendAr(arr, 5);
    ShowArr(arr);
    removeAr(arr);
    ShowArr(arr);
    deleteArr(arr, 1);
    ShowArr(arr);
    addArr(arr, 3, 1);
    ShowArr(arr);
    addArray(arr, arr2, 2);
    ShowArr(arr);
    deleteArray(arr, arr2);
    ShowArr(arr);

}

