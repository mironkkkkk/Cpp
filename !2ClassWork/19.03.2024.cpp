﻿#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int const SIZE = 11;
    int count = 0;
    int arr[SIZE] = {};
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 1 + rand() % (9 + 1 - 1);
        cout << arr[i] << " ";
    }
    cout << endl;
    // пузыркевая
    /*for (int i = 0, flag; i < SIZE - 1; i++) {
        flag = false;
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (arr[j + 1] < arr[j]) {
                swap(arr[j], arr[j + 1]);
                count++;
                flag = true;
            }
        }
        if (!flag) break;
    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << count << endl;*/

    // шейкер
    /*for (int i = 0, flag; i < SIZE - 1; i++) {
        flag = false;
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        for (int j = SIZE - 1 - i; j > i + 1; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                flag = true;
            }
        }
        if (!flag) break;
    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }*/
    // вставка
    /*for (int i = 1; i < SIZE; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
            else break;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }*/
    // сортировка подсчетная 
    /*int const MIN = 1, MAX = 9;
    int arr2[MAX + 1] = {};
    for (int i = 0; i < SIZE; i++) {
        arr2[arr[i]]++;
    }
    for (int i = 0, k = 0; i <= MAX; i++) {
        while (arr2[i] != 0) {
            arr[k++] = i;
            arr2[i]--;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }*/

    for (int i = 0, j = SIZE - 1; i < j; i++) {
        cout << arr[i] << " " << arr[j--] << endl;
        
    }
    if (SIZE / 2) cout << arr[SIZE / 2];
}

