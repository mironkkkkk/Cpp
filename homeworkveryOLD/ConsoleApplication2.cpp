#include <iostream>
using namespace std;


int showMenu() {
	cout << "enter you num: ";
	int num;
	cin >> num;
	return num;
}

void one(int num) {
	while (num != 0) {
		for (int i = num; i > 0; i--) {
			cout << "* ";
		}
		cout << endl;
		num--;
	}
}

void two(int num) {
	int space = 1;
	while (num != 0) {
		for (int i = num; i > 0; i--) {
			cout << "* ";
		}
		cout << endl;
		for (int i = 0; i < space; i++) {
			cout << " ";
		}
		space++;
		num--;
	}
}

void three(int num) {
	int space = 2;
	while (num != 0) {
		for (int i = num; i > 0; i--) {
			cout << "* ";
		}
		cout << endl;
		for (int i = 0; i < space; i++) {
			cout << " ";
		}
		space += 2;
		num--;
	}
}

void four(int num) {
	int count = 1;
	while (count != num + 1) {
		for (int i = 0; i < count; i++) {
			cout << "* ";
		}
		cout << endl;
		count++; 
	}
}

void five(int num) {
	for (int i = 1; i <= num; ++i) {
		for (int j = 1; j <= num - i; ++j) {
			cout << " ";
		}
		for (int k = 1; k <= i; ++k) {
			cout << "* ";
		}
		cout << endl;
	}
}

void sixe(int num) {
	two(num);
	cout << endl;
	five(num);
}

void seven(int num) {
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = num - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void eight(int num) {
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num - i; j++) {
			cout << "  ";
		}
		for (int j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = num - 1; i > 0; i--) {
		for (int j = 0; j < num - i; j++) {
			cout << "  ";
		}
		for (int j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void nine(int num) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		for (int j = 0; j < (num - i - 1) * 2; j++) {
			cout << "  ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	for (int i = num - 2; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		for (int j = 0; j < (num - i - 1) * 2; j++) {
			cout << "  ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void ten(int num) {
	int copy = num;
	while (copy != 0) {
		for (int i = 0; i < copy; i++) {
			cout << "* ";
		}
		cout << endl;
		copy--;
	}
	
}

void eleven(int num) {
	int space = num - 1;
	int count = 1;
	while (space != -1) {
		for (int i = 0; i < space; i++) {
			cout << "  ";
		}
		for (int i = 0; i < count; i++) {
			cout << "* ";
		}
		space--;
		cout << endl;
		count++;
	} 

}


int main()
{
	//one(showMenu()); и 
	//three(showMenu()); а
	//four(showMenu()); б 
	//two(showMenu()); в
	//five(showMenu()); г
	// sixe(showMenu()); д
	// nine(showMenu()); е
	// seven(showMenu()); ж
	// eight(showMenu()); з
	//ten(showMenu()); и 
	//eleven(showMenu()); к






}


