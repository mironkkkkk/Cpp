#include <iostream>
using namespace std;
int main()
{
    // ex1
	srand(time(NULL));
	int arr[5];
	for (int i = 0; i <= 5 - 1; i++) {
		arr[i] = 0 + rand() % (10 + 1 - 0);
		cout << arr[i] << " ";
	}
	int min = arr[0], max = arr[0];
	for (int j = 1; j <= 5 - 1; j++) {
		if (arr[j] > max) max = arr[j];
		if (arr[j] < min) min = arr[j];
	}
	cout << endl << "min - " << min << " max - " << max;

	// ex2
	int minUser, maxUser, arr2[5], n, summ = 0;
	cout << endl << "enter min and max: ";
	cin >> minUser >> maxUser;
	cout << "enter num: ";
	cin >> n;
	if (minUser > maxUser) swap(minUser, maxUser);
	for (int i = 0; i <= 5 - 1; i++) {
		arr2[i] = minUser + rand() % (maxUser + 1 - minUser);
	}
	for (int j = 0; j <= 5 - 1; j++) {
		cout << arr2[j] << " ";
		if (arr2[j] < n) summ += arr2[j];
	}
	cout << endl << "summ - " << summ;

	// ex3
	int minMonth, maxMonth;
	int arr3[12];
	cout << endl;
	for (int i = 0; i <= 12 - 1; i++) {
		cout << "enter " << i + 1 << " month: ";
		cin >> arr3[i];
	}
	cout << "enter min and max: ";
	cin >> minMonth >> maxMonth;
	if (minMonth > maxMonth) swap(minMonth, maxMonth);
	int maxF = arr3[maxMonth], minF = arr3[minMonth];
	for (int i = minMonth - 1; i < maxMonth; i++) {
		if (arr3[i] > maxF) maxF = arr3[i];
	}
	for (int g = maxMonth - 1; g > minMonth; g--) {
		if (arr3[g] < minF) minF = arr3[g];
	}
	cout << endl << "min: " << minF << " max: " << maxF;

	// ex4
	const int k = 5;
	int arr4[k];
	int minesS = 0, minUser = 0, maxUser = 0, summ = 1, evenS = 0, minesNumFirts = 0 ,minesNumSecond = 0, evenSummAll = 0;
	for (int i = 0, flag = false; i <= 10 - 1; i++) {
		arr4[i] = 0 + rand() % (11);
		cout << arr4[i] << " ";
		if (arr4[i] < 0) {
			if (flag) {
				minesS += arr4[i];
				minesNumSecond = i;
			}
			else {
				minesS += arr4[i];
				minesNumFirts = i;
				flag = true;
			}
		}
	}
	for (int i = minUser; i < maxUser; i++) {
		summ *= arr4[i];
		if (arr4[i] % 2 == 0) evenS += arr4[i];
	}	

	for (int i = minesNumFirts; i < minesNumSecond; i++) {
		evenSummAll += arr4[i];
	}
}	
	