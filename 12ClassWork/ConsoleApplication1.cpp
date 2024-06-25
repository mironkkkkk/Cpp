#include <iostream>
using namespace std;

void initArr(int**& arr) { // инициализация массива в дтиапозоне от 10 до 99
    int size1 = _msize(arr) / sizeof(arr[0]);
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            arr[i][j] = 10 + rand() % 89;
        }
    }

}

void deleteStroke(int** arr, int num) { // удаление i строки в 2 мернои динамическом массиве
    int size1 = _msize(arr) / sizeof(arr[0]);
    int** arrBuf = new int* [size1 - 1];
    for (int i = 0; i < num; i++) {
        arrBuf[i] = arr[i];
    }
    for (int i = num; i < size1; i++) {
        arrBuf[i] = arr[i + 1];
    }
    delete[] arr;
    arr = arrBuf;
}

void deleteRow(int** arr, int num) { //  удаление i столбца в 2 мерном динамическом массиве
    int size1 = _msize(arr) / sizeof(arr[0]);
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int** arrBuf = new int* [size1];
    for (int i = 0; i < size1; i++) {
        arrBuf[i] = new int[size2 - 1];
        for (int j = 0; j < num; i++) {
            arrBuf[i][j] = arr[i][j];
        }
        for (int j = num; j < size2; j++) {
            arrBuf[i][j] = arr[i][j + 1];
        }
    }
    delete[] arr;
    arr = arrBuf;
}

int* returnIndexs(int elem, int** arr) { // возвращение индекса строки и колонны элемента
    int size1 = _msize(arr) / sizeof(arr[0]);
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int* result = new int[2] {-1, -1};
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr[i][j] == elem) {
                result[0] = i;
                result[1] = j;
            }
        }
    }
    return result;
}

// сортировка 2 мерного диманического массива 

void swapElem(int a, int b, int**& arr) { // замена одного элемента на другой в 2 мерном массиве
    int size1 = _msize(arr) / sizeof(arr[0]);
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr[i][j] == a) {
                arr[i][j] = b;
            }
        }
    }
}


int main()
{
    
}
