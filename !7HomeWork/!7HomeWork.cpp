#include <iostream>
using namespace std;

void showNum(int num, int exponent) {
	cout << "pow: " << pow(num, exponent);
}

int summNum(int num1, int num2) {
	int summ = 0;
	if (num1 > num2) swap(num1, num2);
	for (int i = num1; i <= num2; i++) {
		summ += i;
	}
	return summ;
}

void searchNum(int num1, int num2) {
	if (num1 > num2) swap(num1, num2);
	for (int i = num1; i <= num2; i++) {
		int summ = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) summ += j;
		}
		if (summ == i) cout << i << " ";
	}
}

void showCard() {
	char card, sumbl;
	int suit;

	cout << "enter card: ";
	cin >> card;
	cout << endl << "enter suit (1 - peak, 2 - peasants, 3 - booba, 4 - heart): ";
	cin >> suit;
	switch (suit)
	{
	case 1:
		sumbl = '♠';
		break;
	case 2:
		sumbl = '♣';
		break;
	case 3:
		sumbl = '♦';
		break;
	case 4:
		sumbl = '♥';
		break;
	default:
		break;
	}
	
	cout << endl;
	for (int j = 0; j <= 10; j++) {
		if (j == 0 || j == 10) {
			for (int i = 0; i < 10; i++) {
				cout << "-";
			}
			cout << endl;
		}
		else if (j == 5) {
			for (int i = 0; i < 10; i++) {
				if (i == 5) cout << card;
				else if (i == 0 || i == 9) cout << "-";
				else cout << " ";
			}
			cout << endl;
		}
		else if (j == 1) {
			for (int i = 0; i < 10; i++) {
				if (i == 8) cout << sumbl;
				else if (i == 0 || i == 9) cout << "-";
				else cout << " ";
			}
			cout << endl;
		}
		else if (j == 9) {
			for (int i = 0; i < 10; i++) {
				if (i == 1) cout << sumbl;
				else if (i == 0 || i == 9) cout << "-";
				else cout << " ";
			}
			cout << endl;
		}
		else {
			for (int i = 0; i <= 10; i++) {
				if (i == 0 || i == 9) cout << "-";
				else cout << " ";
			}
			cout << endl;
		}
	}
}

void luckNum(int num) {
	if (num % 10 + num % 100 / 10 + num % 1000 / 100 == num / 100000 + num / 10000 % 10 + num / 1000 % 10) cout << "nice luck";
	else cout << "not clever";
}

int main()
{
	setlocale(LC_ALL, "rus");
	
	
}
