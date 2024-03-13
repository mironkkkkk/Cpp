#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	// ex 1
	/*
	int min = 100;
	int max = 999;
	int count = 0;
	while (min < max) {
		if (min % 10 == (min / 10) % 10 || min % 10 == (min / 10) / 10 || (min / 10) / 10 == (min / 10) % 10)
			count++;
		if (min % 10 == (min / 10) % 10 && min % 10 == (min / 10) / 10 && (min / 10) % 10 == (min / 10) / 10)
			count--;
		min++;
	}
	cout << count;
	*/


	// ex 2
	/*
	int min = 100;
	int max = 999;
	int count = 0;
	while (min < max) {
		if (!(min % 10 == (min / 10) % 10 || min % 10 == (min / 10) / 10 || (min / 10) / 10 == (min / 10) % 10) && !(min % 10 == (min / 10) % 10 && min % 10 == (min / 10) / 10 && (min / 10) % 10 == (min / 10) / 10))
			count++;
		min++;
	}
	cout << count;
	*/


	// ex 3
	/*
		int num;
	cout << "enter num: ";
	cin >> num;
	int i = 0;
	int numbers;
	int b;
	while (num > 0) {
		numbers = num % 10;
		if (numbers == 6 || numbers == 3) {
			num = num / 10;
			i++;
		}
		else {
			i = i + numbers * b;
			b *= 10;
			num = num / 10;
		}
	}
	cout << i;
	*/

	// ex 4
	/*
	int num;
	int num2 = 1;
	cout << "enter num: ";
	cin >> num;
	while (num > num2) {
		if ((num % (num2 * num2) == 0) && (num % (num2 * num2 * num2) != 0)) 
			cout << num2 << endl;
		num2++;
	}
	*/

	// ex5
	/*
	int a;
	cout << "enter num: ";
	cin >> a;
	int cube = a * a;
	int summ = 0;
	while (a < 0) {
		summ += a % 10;
		a / 10;
	}
	if (summ * summ * summ == cube) cout << "они =";
	else cout << "они не =";
	*/

	// ex6 
	/*
	int a;
	int i = 1;
	cout << "enter a: ";
	cin >> a;
	while (a >= i) {
		if (a % i == 0) cout << a << endl;
		i++;
	}
	*/

	// ex7
	/*
	int min, max;
	int i = 1;
	cout << "enter min and max: ";
	cin >> min >> max;
	if (min > max) swap(min, max);
	while (i <= min) {
		if (min % i == 0 && max % i == 0) cout << i << endl;
		i++;
	}
	*/
}

