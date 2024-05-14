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
    const int STR = 4;
    const int COLUMN = 3;
    int mass[STR][COLUMN]{};
    int sumAll = 0;

    for (int i = 0; i < STR; i++) {
        for (int j = 0; j < COLUMN; j++) {
            mass[i][j] = 1 + rand() % 9;
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0, sum; i < STR; i++) {
        sum = 0;
        for (int j = 0; j < COLUMN; j++) {
            cout << mass[i][j] << "\t";
            sum += mass[i][j];
        }
        cout << "| " << sum;
        sumAll += sum;
        cout << endl;
    }

    for (int j = 0, sum; j < COLUMN; j++) {
        sum = 0;
        for (int i = 0; i < STR; i++) {
            sum += mass[i][j];
        }
        cout << sum << "\t";
    }


    cout << "| " << sumAll;
}

