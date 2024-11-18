#include <iostream>
#include <string>
using namespace std;


void ex1(string& str, int index) {
    str.erase(index, 1);
}

void ex2(string& str, char a) {
    str.erase(remove(str.begin(), str.end(), a), str.end());
}

void ex3(string& str, int index, char a) {
    str.insert(index, 1, a);
}

void ex4(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
}

int ex5(string str, char a) {
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == a) {
            count++;
        }
    }
    return count;
}

void ex6(string str) {
    int letters = 0;
    int digits = 0;
    int others = 0;

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            letters++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else {
            others++;
        }
    }
    cout << "letters: " << letters << " digits: " << digits << " others: " << others;
}



int main()
{
    
}


