#include <iostream>
using namespace std;

union MyUnion1
{
    int a;
    unsigned char arr[4];

    void enterNum() {
        cin >> a;
    }

    void showNum() {
        cout << a;
    }

    void showBytes() {
        for (int i = 0; i < sizeof(arr); i++) {
            cout << int(arr[i]) << endl;
        }
    }

    void showByte(int index) {
        cout << int(arr[index]) << endl;
    }

    void enterByte() {
        for (int i = 0; i < sizeof(arr); i++) {
            printf("%x", arr[i]);
        }
        cout << endl;
    }
};  

union MyUnion2
{
    int a;
    unsigned int b;

    void show() {
        cout << a;
    }
};

union MyUnion3
{
    int a;
    bool arr[4];

    void enterNum() {
        cin >> a;
    }

    void arrCount() {
        int count = 0;
        for (int i = 0; i < 4; i++) {
            if (arr[i] == 0) {
                count++;
                cout << "нулевой";
            }
            else {
                cout << "не нулевой";
            }
        }
    }
};




int main()
{
    LC_ALL('rus');
     
    MyUnion1 start1;
    start1.enterNum();
    start1.enterByte();

    MyUnion2 start2;
    start2.show();

    MyUnion3 start3;
    start3.arrCount();





}

