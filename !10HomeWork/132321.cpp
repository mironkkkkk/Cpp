#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    // создание массива
    int** arr = new int* [5] {};
    for (int i = 0; i < 5; i++) {
        arr[i] = new int[5];
        for (int j = 0; j < 5; j++) {
            arr[i][j] = 1 + rand() & 9;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // добавдение столбца
    int* array = new int[5] {1, 2, 3, 4, 5};
    int** buf = new int* [5] {};
    for (int i = 0; i < 5; i++) {
        buf[i] = new int[6];
        buf[i] = arr[i];
    }
    for (int i = 0; i <= 4; i++) {
        buf[i][5] = array[i];
    }
    delete[] arr;
    arr = buf;

    cout << endl;

    // вывод
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // удаление столбца
    int** arrBuf = new int*[5] {};
    for (int i = 0; i < 5; i++) {
        arrBuf[i] = new int[5];
        for (int j = 0; j < 5; j++) {
            arrBuf[i][j] = arr[i][j];
        }
    }
    delete[] arr;
    arr = arrBuf;

    cout << endl;

    // вывод
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // удаление строки
    int** arrayBuf = new int* [4] {};
    for (int i = 0; i < 4; i++) {
        arrayBuf[i] = arr[i];
    }

    delete[] arr;
    arr = arrayBuf;

    // вывод
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

}


