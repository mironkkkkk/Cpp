#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Дано два текстовых файла.Выяснить, совпадают ли их строки.Если нет, то вывести несовпадающую строку из каждого файла.
void equalFile(string path1, string path2) {
    ifstream in1(path1);
    ifstream in2(path2);

    string line1;
    string line2;
    if (in1.is_open() && in2.is_open()) {
        while (getline(in1, line1)) {
            while (getline(in2, line2)) {
                if (line1 != line2) {
                    cout << line1 << endl;
                }
            }
        }
    }
    in1.close();
    in2.close();
}


// Дан текстовый файл. Необходимо создать новый файл и записать в него следующую статистику по исходному файлу :
// ■ Количество символов; ■ Количество строк; ■ Количество гласных букв; ■ Количество согласных букв; ■ Количество цифр.

void statusFile(string path1, string path2) {
    ifstream in(path1);
    ofstream out(path2);

    int summChar = 0;
    int summString = 0;
    int summVowel = 0;
    int summConsonant = 0;
    int summInt = 0;
    char arr1[] = { 'а', 'и', 'е', 'ё', 'о', 'у', 'ы', 'э', 'ю', 'я' };
    int arr2[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };



    string line;
    if (in.is_open()) {
        while (getline(in, line)) {
            for (int i = 0; i < line.length(); i++) {
                summChar++;
                for (int j = 0; j < 10; j++) {
                    if (line[i] == arr1[j]) {
                        summVowel++;
                    }
                    else {
                        summConsonant++;
                    }

                    if (line[i] == arr2[j]) {
                        summInt++;
                    }
                }
            }
            summString++;
        }
        out << "кол-во символов: " << summChar << endl << "кол-во строк: " << summString << endl << "кол-во гласных: " << summVowel << endl << "кол-во согласных: " << summConsonant << endl << "кол-во цыфр: " << summInt;
    }
    in.close();
    out.close();
}

//Шифр Цезаря — один из древнейших шифров.
//Дан текстовый файл.Зашифровать его, используя
//шифр Цезаря.Результат записать в другой файл.

void shifrSalat(string path1, string path2, int key) {
    string line;
    ifstream in(path1);
    ofstream out(path2);

    char letters[] = { 'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я' };
    if (in.is_open()) {
        while (in >> line) {
            for (int i = 0; i < line.length(); i++) {
                for (int k = 0; k < 33; k++) {\
                    if (k > 30 && line[i] == letters[k]) {
                        out << letters[(k + 3) - 33];
                        continue;
                    }
                    else if (line[i] == letters[k]) {
                        out << letters[k + 3];
                        continue;
                    }
                }
            }
        }
    }
    in.close();
    out.close();
}

int main()
{
    string path1 = "file1";
    string path2 = "file2";
}

