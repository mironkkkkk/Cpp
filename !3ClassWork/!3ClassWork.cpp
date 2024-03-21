#include <iostream>
using namespace std;

void numsShow(int n) {
    if (n < 0) {
        for (int i = n; i <= 0; i++) {
            cout << i << " ";
        }
    }
    else {
        for (int i = 0; i <= n; i++) {
            cout << i << " ";
        }
    }
   
}

void showRectangle(int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void showSqrt(int num) {
    int sqrt = 1;
    for (int i = 1; i <= num; i++) {
        sqrt *= i;
    }
    cout << sqrt << " fact" << endl;
}

void showNum(int number) {
    for (int i = 2, flag; i <= number; i++) {
        flag = false;
        if (number % i == 0) {
            flag = true;
        }
        if (flag) {
            cout << "simple";
            break;
        }
    }
}

void maxInt(int num1, int num2 , int num3 , int num4 ,int num5) {
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    if (num4 > max) max = num4;
    if (num5 > max) max = num5;
    cout << "max: " << max;
}

int maxTwoInt(int num1, int num2) {
    return((num1 > num2) ? num1 : num2);
}

bool showNums(int number) {
    for (int i = 2; i <= number; i++) {
        if (number % i == 0) {
            return true;
        }
    }
    return false;
}

int cubeNum(int num) {
    return num * num * num;
}

bool numTrue(int num) {
    return ((num >= 0) ? true : false);
}

void mySwap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void mySwap(float& a, float& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void mySwap(double& a, double& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void mySwap(char& a, char& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void showCross(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i == n - 1 - j) cout << "* ";
            else cout << " ";
        }
    }
}


int main()
{
    int num;
    cout << "enter n: ";
    cin >> num;
    numsShow(num);

    int n, k;
    cout << endl << "enter n,k: ";
    cin >> n >> k;
    showRectangle(5, 8);

    int number;
    cout << endl << "enter number: ";
    cin >> number;
    showSqrt(number);

    int numbers;
    cout << "enter number: ";
    cin >> numbers;
    showNum(numbers);

    cout << endl;
    maxInt(1, 2, 3, 4, 5);

    cout << endl;
    cout << maxTwoInt(5, 1);

    cout << endl << showNums(13);

    cout << endl << cubeNum(3);
    cout << endl << maxTwoInt(1, 5);
    cout << endl << numTrue(3);

    int a = 5;
    int b = 6;
    float a = 7;
    float b = 8;
    double a = 3;
    double b = 2;
    char a = 'a';
    char b = 'b';
    int n = 6;
    cout << endl << a << " " << b << endl;
    mySwap(a, b);
    cout << a << " " << b << endl;
    showRectangle(n);





    
}

