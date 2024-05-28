#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countStr(string str) {

	int summ = 0;

	ifstream in(str); // открытие потока , (файла) относительный путь
	if (in.is_open()) {
		while (getline(in, str)) {
			for (int i = 0; str[i] != '\0'; i++) {
				summ++;
			}
		}
	}
	else {
		cout << "file not found it is not PEREMOGA";
	}
	in.close();
	return summ;
}

//int countWordFile(string buf) {
//
//	int k = 0;
//
//	ifstream in(buf); // открытие потока , (файла) относительный путь
//
//	if (in.is_open()) {
//		while (getline(in, buf)) {
//			k += countWord(buf);
//		}
//	}
//	else {
//		cout << "file not found it is not PEREMOGA";
//	}
//
//	in.close(); // закрытие потока
//	return k;
//	
//}

//int countWord(string str) {
//
//	int summWord = 0;
//	
//	ifstream in(str); // открытие потока , (файла) относительный путь
//	if (in.is_open()) {
//		while (getline(in, str)) {
//			int k = 0;
//			for (; str[k] == ' ' && str[k] != '\0'; k++)
//				for (int i = k; str[i] != '\0'; i++) {
//					if (str[i] != ' ' && str[i + 1] != '\0') summWord++;
//					if (str[i] == ' ' && str[i + 1] != ' ') summWord++;
//				}
//		}
//	}
//	else {
//		cout << "file not found it is not PEREMOGA";
//	}
//
//	in.close(); // закрытие потока
//	return summWord;
//}

//int countWordUsers(string path, string word) { // счетчик слов в строке
//
//	int count = 0;
//
//	ifstream in(path);
//	if (in.is_open()) {
//		while (getline(in, path)) {
//			for (int i = 0; path[i] != '\0'; i++) {
//				bool flag = false;
//				if (path[i] == word[0]) {
//					for (int j = 1; word[j] != '\0'; j++) {
//						for (int k = 1; path[k] != '\0'; k++) {
//							if (word[j] == path[k]) {
//								flag = true;
//							}
//						}
//					}
//					if (flag) count++;
//				}
//			}
//		}
//	}
//	else {
//		cout << "file is not find";
//	}
//
//	in.close();
//
//	return count;
//
//}

void remake(string path) {
	string buf;
	string buf2;
	string bufName = "";
	for (int i = 0; i < path.length() - 3; i++) {
		bufName += path[i];
	}
	bufName += "(copy).txt";
	ifstream in(path);
	ofstream out(bufName);
	if (in.is_open()) {
		while (getline(in, buf2)) {
			buf += buf2 + '\n';
		}
	}
	else {
		cout << "File not find!";
	}
	out << buf;

	in.close();
	out.close();
}

void remakeASK(string path, int k) {
	string buf;
	string buf2;
	string bufName = "";
	for (int i = 0; i < path.length() - 3; i++) {
		bufName += path[i];
	}
	bufName += "(code).txt";
	ifstream in(path);
	ofstream out(bufName);
	if (in.is_open()) {
		while (getline(in, buf2)) {
			for (int i = 0; buf2[i] != '\0'; i++) {
				buf += buf2[i] + k;
			}
		}
	}
	else {
		cout << "File not find!";
	}
	out << buf;

	in.close();
	out.close();
}


int main()
{
	string buf = "Z\\zov.txt";
	//cout << countWordFile(buf);
	remake(buf);
	remakeASK(buf, 3);

	
}