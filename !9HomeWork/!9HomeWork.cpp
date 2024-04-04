#include <iostream>
using namespace std;




void changeArr(int*& arr1, int*& arr2) {
	int* arrBuf = new int[5];
	for (int i = 0; i < 5; i++) {
		arrBuf[i] = arr1[i];
	}
	for (int i = 0; i < 5; i++) {
		arr1[i] = arr2[i];
	}
	arr2 = arrBuf;
}

void showArr(int*& arr) {
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void returnArr(int*& arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	int* arrBuf = new int[size];
	for (int i = size - 1, j = 0; i >= 0; i--) {
		arrBuf[j] = arr[i];
		j++;
	}
	delete[] arr;
	arr = arrBuf;
}

void changeAbackArr(int*& arr1, int*& arr2) {
	int size = _msize(arr1) / sizeof(arr1[0]);
	int* arrBuf = new int[size];
	for (int i = size - 1, j = 0; i >= 0; i--) {
		arrBuf[j] = arr1[i];
		j++;
	}
	for (int i = 0; i < 5; i++) {
		arr1[i] = arr2[i];
	}
	delete[] arr2;
	arr2 = arrBuf;
}

int main()
{
	const int SIZE = 5;
	int* arr1 = new int[SIZE] {8, 2, 9, 3, 5};
	int* arr2 = new int[SIZE] {6, 10, 4, 1, 7};
	changeArr(arr1, arr2);
	showArr(arr1);
	showArr(arr2);
	int* arr3 = new int [SIZE] {1,2,3,4,5};
	returnArr(arr3);
	showArr(arr3);
	changeAbackArr(arr1, arr2);
	showArr(arr1);
	showArr(arr2);
}

