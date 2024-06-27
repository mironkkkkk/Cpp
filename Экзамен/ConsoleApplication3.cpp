#include <string>
#include <fstream>
#include <iostream>
#define random(min , max) min + rand() % (max - min + 1)
using namespace std;

// 1
void min(int a, int b, int c, int d) {
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	if (min > d) min = d;
}

// 2
void show() {
	for (int i = -3; i > -25; i -= 3) {
		cout << i << endl;
	}
}

// 3
void cube(int a) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = a - i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}	
}

// 4
void user() {
	float num;
	int count = 0;
	float arf = 0;
	while (true) {
		cout << "enter num: ";
		cin >> num;
		if (num == 0) {
			cout << arf / count++;
			break;
		}
		arf += num;
		count++;
	}
}

// 5
void randomMass(int min, int max) {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		arr[i] = random(min, max);
		cout << arr[i] << " ";
	}
}

// 6
void massMin() {
	int** arr = new int* [5];
	for (int i = 0; i < 5; i++) {
		arr[i] = new int[5];
		for (int j = 0; j < 5; j++) {
			arr[i][j] = random(0, 5);
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int count = 1;
	int index;
	int summ = 0;
	int summNow = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < count; j++) {
			summNow += arr[i][j];
		}
		if (summ > summNow) {
			summ = summNow;
			index = count - 1;
		}
		summNow = 0;
	}
	cout << index;
	
}
// 9
void addRow(int index) {
	int arr[3] = { 4,4,7 };
	int count = 0;
	int** arrBuf = new int* [4];
	for (int i = 0; i < 4; i++) {
		arrBuf[i] = new int[3];
		for (int j = 0; j < 3; j++) {
			arrBuf[i][j] = random(0, 5);
		}
	}

	int** buf = new int* [4];
	for (int i = 0; i < 4; i++) {
		arrBuf[i] = new int[4];
		for (int j = 0; j < index; j++) {
			buf[i][j] = arrBuf[i][j];
		}
		buf[i][index] = count++;
		for (int j = index + 1; j < 4; j++) {
			buf[i][j + 1] = arrBuf[i][j];
		}
	}
	delete[]arrBuf;
	arrBuf = buf;
}

// 11
void file(string path) {
	int countStr = 0;
	int countSim = 0;
	string pathCopy;
	ifstream in(path);
	ofstream out(pathCopy);
	if (in.is_open()) {
		while (getline(in, path)) {
			for (int i = 0; path[i] != '\0'; i++) {
				if (path[i] == ' ') {
					out << path[i];
					for (int j = i; path[j] == ' '; j++) {
						i = j;
					}
				}
				out << path[i];
			}
			out << "\n";
		}
		out << "кол-во строк: " << countStr;
	}
	in.close();
	ifstream in(pathCopy);
	if (in.is_open()) {
		while (getline(in, pathCopy)) {
			for (int i = 0; pathCopy[i] != '\0'; i++) {
				countSim++;
			}
			countStr++;
		}
		out << "кол-во строк: " << countStr << '\n' << "кол-во символов: " << countSim;
	}
	out.close();
}




int main()
{
	srand(time(NULL));
}




