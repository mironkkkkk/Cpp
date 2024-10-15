#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void readFile(string path1, string path2) {
	string line;
	ifstream in(path1);
	ofstream out(path2);
	if (in.is_open()) {
		while (in >> line) {
			if (line.length() >= 7) {
				out << line << " ";
			}
		}
	}
	in.close();
	out.close();
}

void cloneFile(string path1, string path2) {
	string line;
	ifstream in(path1);
	ofstream out(path2);
	if (in.is_open()) {
		while (getline(in, line)) {
			out << line << endl;
		}
	}
	in.close();
	out.close();
}

void cloneFileReverse(string path1, string path2) {
	string line;
	ifstream in(path1);
	ofstream out(path2);
	if (in.is_open()) {
		while (getline(in, line)) {
			out << line << endl;
		}
	}
	in.close();
	out.close();
}





int main()
{
	string path1 = "test.txt";
	string path2 = "testClone.txt";
	//readFile(path1, path2);
	cloneFile(path1, path2);
}




