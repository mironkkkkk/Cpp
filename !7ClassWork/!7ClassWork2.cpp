#include <iostream>
using namespace std;

int main()
{
    /*srand(time(NULL));
    int a, b, summ = 0, n;
    cout << "Enter a,b: ";
    cin >> a >> b;
    if (a > b) swap(a, b);
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) cout << i << " " << endl;
    }

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0) {
            summ += i;
        }
    }
    cout << summ;

    cout << endl << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
    for (int i = 2; i < n; i++) {
        cout << "* ";
        for (int j = 2; j < n; j++) {
            cout << "  ";
        }
        cout << "* " << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
    int min, max;
    cout << "Enter min, max: ";
    cin >> min >> max;
    if (min > max) swap(min, max);
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = a + rand() % (b + 1 - a);
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10 / 2; i++) {
        swap(arr[i], arr[10 - 1 - i]);
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    int id = 0;
    for (int i = 1; i < 10; i++) {
        if (arr[id] > arr[i]) {
            id = i;
        }
    }
    cout << endl << "id: " << id << endl;

    int array[5][8]{};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            array[i][j] = 2 + rand() % 4;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    int summMax = 0;
    int summMin = 40;
    int idBetter = 0;
    int idWorst = 0;
    for (int i = 0, summ= 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            summ += array[i][j];
        }
        if (summ > summMax) { 
            summMax = summ;
            idBetter = i;
        }
        if (summ < summMin) { 
            summMin = summ;
            idWorst = i;
        }
    }

    cout << "idBetter: " << idBetter << " idWorst: " << idWorst << endl;
    */
    const int SIZE1 = 3;
    const int SIZE2 = 4;
    int mass[SIZE1][SIZE2]{};
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE2; j++) {
            mass[i][j] = 1 + rand() % 9;
        }
    }
    int summSTR = 0;
    int summCOL = 0;

    for (int i = 0, summ; i < SIZE1; i++) {
        summ = 0;
        for (int j = 0; j < SIZE2; j++) {
            cout << mass[i][j] << " ";
            summ += mass[i][j];
        }
        cout << summ;
        summSTR += summ;
        cout << endl;
    }
    
    for (int k = 0, summ; k < SIZE2; k++) {
        summ = 0;
        for (int i = 0; i < SIZE2; i++) {
            for (int j = 0; j < SIZE1; j++) {
                summ += mass[i][j];
            }
        }
        cout << summ << " ";
        summCOL += summ;
    }
    cout << summCOL + summSTR;
}

