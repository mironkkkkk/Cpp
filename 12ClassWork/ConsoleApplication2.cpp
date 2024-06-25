#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void showText(string path) { // вывод всех строк из файла
    ifstream in(path);
    if (in.is_open()) {
        while (getline(in, path)) {
            cout << path << endl;
        }
    }
    else {
        cout << "file is not found";
    }

}

int main()
{
    
}


