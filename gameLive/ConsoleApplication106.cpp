#include <iostream>
#include <string>
using namespace std;

const int SIZE = 10;

void printArr(int** arr) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// game live

int main()
{
    srand(time(NULL));
    int** pole = new int* [SIZE];
    for (int i = 0; i < SIZE; i++) {
        pole[i] = new int[SIZE] {};
    }

    printArr(pole);
    cout << endl;

    bool flag = true;
    int count = 0;
    while (flag) {
        int choise;
        cout << "1 - painting square, 2 - start" << endl;
        cout << "enter choise: ";
        cin >> choise;
        int index1 = 0;
        int index2 = 0;
        switch (choise)
        {
        case 1:
            cout << "enter index1 and index2 for paint square: ";
            cin >> index1 >> index2;
            pole[index1][index2] = 1;
            printArr(pole);
            break;
        case 2:
            cout << "start, poehali";
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    if (pole[i][j] == 1) {
                        if (i != 0 || i != 9 || j != 0 || j != 9) {
                            
                        }
                        else {
                            if (pole[i + 1][j] == 1) { count++; }
                            if (pole[i - 1][j] == 1) { count++; }

                            if (pole[i + 1][j + 1] == 1) { count++; }
                            if (pole[i + 1][j - 1] == 1) { count++; }

                            if (pole[i - 1][j - 1] == 1) { count++; }
                            if (pole[i - 1][j + 1] == 1) { count++; }

                            if (pole[i][j + 1] == 1) { count++; }
                            if (pole[i][j - 1] == 1) { count++; }
                        }

                        if (count < 2 || count > 3) { pole[i][j] == 0; }
                        count = 0;
                    }

                }
            }
            flag = false;

            break;
        default:
            break;
        }
    }
}

