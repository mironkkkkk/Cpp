#include <iostream>
#define min(a,b) cout << ((a > b)? b : a)
#define max(a,b) cout << ((a > b) ? a : b)
#define sqrt(a) cout << a * a
#define degree(a, b) for (int i = 1, k = a; i < b; i++, a *= k)
#define even(a) cout << ((a % 2 == 0) ? "even" : "odd")
#define odd(a) cout << ((a % 2 == 1) ? "odd" : "even")
#define rand(a,b) a + rand() % b - a + 1
#define maximum(a,b,c) if(a > b && a > c) cout << a; else if (b > c) cout << b; else cout << c

using namespace std;

void chan(char str[], int size) {
	for (int i = 0; i < size / 2; i++) {
		swap(str[i], str[i - 1 - i]);
	}
}

int countNum(char str[]) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') count++;
	}
	return count;
}

int countChar(char str[]) {
	int count = 0; 
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') count++;
	}
	return count;
}

int countWord(char str[]) {
	int count = 0;
	int k = 0;
	for (; str[k] == ' ' && str[k] != '\0'; k++);
	for (int i = k; str[i] != '\0'; i++) {
		if (str[i] != ' ' && str[i + 1] == '\0') count++;
		if (str[i] == ' ' && str[i + 1] != ' ') count++;
	}
	return count;
}

int qwerty(char str[]) {
	int count = 0;
	return count;
}

int main()
{
	srand(time(NULL));
	int a = 5;
	degree(a, 4);
	cout << a << endl;
	int num = rand(1,10);
	maximum(1, 2, 3);

	char str[] = {"qwerty142"};
	//for (int i = 0; i < 9; i++) {
	//	cout << str[1];
	//}
	//cout << str << endl;;

	//chan(str, sizeof(str) - 1);
	//cout << endl;
	// https://pastebin.com/2GiKWrkN?clckid=2abf8df4
	cout << endl << countNum(str);
	cout << endl;
	cout << countChar(str);
	cout << endl;
	cout << countWord(str);


}



