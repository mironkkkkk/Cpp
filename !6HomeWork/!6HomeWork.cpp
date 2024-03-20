#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[5][5] = {};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = 10 + rand() % (99 + 1 - 10);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int array[8][2] = {};
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "enter index " << i + 1 << ":";
            cin >> array[i][j];
        }
    }
    cout << endl;
    for (int i = 0, ind1 = 0, ind2 = 0; i < 8; i++) {
        arr[array[i][0]][array[i][1]] = 0;
    }
    int k1 = 0, k2 = 0;
    int arrF[5][5] = {};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] != 0) {
                arrF[k1][k2] = arr[i][j];
                k1++;
                if (k1 < 4) {
                    k1 = 0;
                    k2++;
                }
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arrF[i][j] << " ";
        }
        cout << endl;
    }
}
