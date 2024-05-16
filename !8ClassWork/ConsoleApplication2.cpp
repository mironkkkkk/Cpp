#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));

    int a = 4;
    cout << a; // 4
    cout << &a; // F0

    int& la = a; // к значению ячейки F0 мы можем обращаться используя 'a' или 'la'
    la += 2; // a = 6 la = 6

    int* pa = &a; 
    cout << pa; // F0
    cout << *pa; // 4
    cout << &pa; // C0 - адрес указателя

    int* arr = new int[4] {1, 2, 3, 4};
    cout << sizeof(arr); // 8 - размер памяти занимающий указателем
    cout << _msize(arr); // 16 - общий размер памяти занимающий массивом
    cout << sizeof(arr[0]); // 4 - размер памяти занимающий одним массивом
    int size = _msize(arr) / sizeof(arr[0]); // кол-во элементов в массиве

    int* arrBuf = new int[size + 1];
    for (int i = 0; i < size; i++) {
        arrBuf[i] = arr[i];
    }
    arrBuf[size] = 52;
    delete[] arr;
    arr = arrBuf;

    int* arrBuf2 = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        arrBuf2[i] = arr[i];
    }
    delete[] arr;
    arr = arrBuf2;

    int* array = new int[10] {};
    int n, k;
    cout << "enter n, k: ";
    cin >> n >> k;
    for (int i = 0; i < 10; i++) {
        array[i] = 0 + rand() % 9;
    }
    int* arrayBuf = new int[10 - n] {};
    for (int i = 0; i < k; i++) {
        arrayBuf[i] = array[i];
    }
    for (int i = k + n; i < 10; i++) {
        arrayBuf[i - n] = array[i];
    }

    delete[] array;
    array = arrayBuf;


    int** arr2 = new int* [3] {};
    for (int i = 0; i < 3; i++) {
        arr2[i] = new int[3];
        for (int j = 0; j < 2; j++) {
            arr2[i][j] = 0 + rand() % 9;
        }
    }

    int** arr3 = new int* [3] {};
    int* arr4 = new int[2] {6,9};
    int** buf = new int* [4] {};
    for (int i = 0; i < 3; i++) {
        arr3[i] = new int[2];
        for (int j = 0; j < 2; j++) {
            arr3[i][j] = 1 + rand() % 9;
        }
    }
    for (int i = 0; i < 3; i++) {
        buf[i] = arr3[i];
    }
    buf[4] = arr4;
    delete[] arr3;
    arr3 = buf;

    int** arr52 = new int* [3] {};
    int* arr69 = new int[5, 1, 2];
    int** buf52 = new int* [4];
    for (int i = 0; i < 3; i++) {
        arr52[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            arr52[i][j] = 1 + rand() % 9;
        }
    }
    for (int i = 0; i < 3)







}
