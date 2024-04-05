#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 8;
	int arr[SIZE]{ 123, 322, 3553, 4343, 213, 244, 345, 2362};
	int arrBuf[10][SIZE]{};
	int max = arr[0];
	int min;
	int n = 1;

	for (int i = 1; i < SIZE; i++) {
		if (arr[i] > max) max = arr[i];
	}
	min = arr[0];

	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < min) min = arr[i];
	}
	if ((-1 * min) > max) max = min * -1;
	

	for (int i = 1; (max / i) != 0; i *= 10) {
		n *= 10;
	}

	int arrBuf2[10][SIZE]{};

	for (int k = 1; k <= n; k *= 10) {
		for (int i = 0, jBuf = 0; i < SIZE; i++) {
			for (int j = 0; j < 10; j++) {
				if (((arr[i] / k)) % 10 == j) arrBuf2[j][jBuf++] = arr[i];
			}
		}
		for (int i = 0, arrI = 0; i < 10; i++) {
			for (int j = 0; j < SIZE; j++) {
				if (arrBuf2[i][j]) arr[arrI++] = arrBuf2[i][j];
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < SIZE; j++) {
				arrBuf2[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "  ";
	}
}
