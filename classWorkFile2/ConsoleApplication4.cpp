#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// 1
int readFile(string path1, char user) {
	int count = 0;
	string line;
	ifstream in(path1);
	if (in.is_open()) {
		while (in >> line) {
			if (line[0] == user) {
				count++;
			}
		}
	}
	in.close();
	return count;
}

// 2
void readChange(string path1, string path2) {
	string line;
	ifstream in(path1);
	ofstream out(path2);
	if (in.is_open()) {
		while (getline(in, line)) {
			for (int i = 0; i < line.length(); i++) {
				if (line[i] == '0') {
					line[i] = '1';
				}
				else if (line[i] == '1') {
					line[i] = '0';
				}
			}
			out << line;
		}
	}
	in.close();
	out.close();
}

// 3

// ширина массива 5
void ArrRead(string path1, string arr[]) {
	ofstream out(path1);
	if (out.is_open()) {
		for (int i = 0; i < 5; i++) {
			out << arr[i] << endl;
		}
	}
	out.close();
}

// 4
void readChange(string path1) {
	string line;
	int count = 0;
	ifstream in(path1);
	if (in.is_open()) {
		while (getline(in, line)) {
			count += line.size();	
		}
	}
	in.close();
}

// 5
int readFileStroki(string path1) {
	int count = 0;
	string line;
	ifstream in(path1);
	if (in.is_open()) {
		while (getline(in, line)) {
			count++;
		}
	}
	in.close();
	return count;
}

// 1 
void readChange(string path1, string path2, string path3) {
	string line;
	ifstream in2(path3); // фаил со запретками
	string* arr = new string[];
	if (in2.is_open()) {
		int k = 0;
		while (in2 >> line) {
			arr[k] = line;
			k++;
		}
	}
	in2.close();

	bool flag = false;
	ifstream in(path1);
	ofstream out(path2);
	if (in.is_open()) {
		while (in >> line) {
			for (int i = 0; i < 20; i++) {
				if (line == arr[i]) {
					flag = true;
				}
			}
			if (!flag) {
				out << line;
			}
			else {
				flag = false;
				continue;
			}
		}
	}
	in.close();
	out.close();
}

int main()
{
	
}

