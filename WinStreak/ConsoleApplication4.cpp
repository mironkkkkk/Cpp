#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void coutChoise() {
    cout << "Enter you choise: 1 - rock 2 - paper 3 - scissors 4 - break: " << endl;
}

int choiseComp() {
    int choise = 1 + rand() % 3;
    return choise;
}

bool returnWinner(int user, int computer) {
    switch (user)
    {
    case 1: switch (computer)
            {
            case 2:
                cout << "You lose:(" << endl;
                return false;
                break;

            case 3:
                cout << "You win:)" << endl;
                return true;
                break;

            default:
                break;
            }
    case 2: switch (computer)
            {
            case 1:
                cout << "You win:)" << endl;
                return true;
                break;

            case 3:
                cout << "You lose:(" << endl;
                return false;
                break;

            default:
                break;
            }
    case 3:
        switch (computer)
        {
            case 1:
                cout << "You lose:(" << endl;
                return false;
                break;

            case 2:
                cout << "You win:)" << endl;
                return true;
                break;

            default:
                break;
            }

    default:
        break;
    }
}



int main()
{
    srand(time(NULL));
    string path = "WinStreak\\win.txt";
    int streak = 0;
    int MaxWin = 0;
    bool doflag = true;

    while (true) {
        ifstream in(path); // считывание максимального рекорда в прошлом запуске
        if (in.is_open()) {
            while (getline(in, path)) {
                for (int i = 0; path[i] != '\0'; i++) {
                    MaxWin *= 10;
                    MaxWin += path[i] - 48;
                }
            }
        }
        bool flag;
        int choiseComputer;
        choiseComputer = choiseComp();

        int choiseUser;
        coutChoise();
        cin >> choiseUser;
        if (choiseUser == 4) {
            cout << "Program completed! " << endl;
            ofstream out(path);
            out << MaxWin;
            out.close();
            break;
        }
        else if(choiseUser == choiseComputer){
            cout << "Draw, play again!" << endl; 
        }
        else {
            flag = returnWinner(choiseUser, choiseComputer);
            if (flag) {
                if (doflag) {
                    streak++;
                    if (MaxWin < streak) {
                        MaxWin = streak;
                        cout << "You broke record:)" << endl;
                    }
                }
                else {
                    streak = 1;
                }
            }
            else {
                streak = 0;
            }
        }

    }
}


