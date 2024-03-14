#include <iostream>
using namespace std;
int main()
{
    // ex1
    const int size1 = 5;
    const int size2 = 5;
    int num;
    cout << "enter num: ";
    cin >> num;
    int arr[size1][size2] = {};
    for (int i = 0, number = num; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            arr[i][j] = number;
            number *= 2;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // ex2
    const int size3 = 4;
    const int size4 = 4;
    int arr2[size3][size4] = {};
    int num2;
    cout << "enter num: ";
    cin >> num2;
    for (int i = 0, count = num2; i < size3; i++) {
        for (int j = 0; j < size4; j++) {
            arr2[i][j] = num2;
            num2++;
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}

