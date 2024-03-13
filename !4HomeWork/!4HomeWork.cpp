#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int countOne = 0;
    int countTwo = 0;
    const int SIZE = 10;
    const int SIZE2 = 5;
    const int SIZE3 = SIZE + SIZE2;
    int array[SIZE];
    int array2[SIZE2];
    int arr3[SIZE3];
    int arr4[SIZE3];

    for (int i = 0, flag; i < SIZE; i++) {
        flag = true;
        for (int j = 0; j < SIZE; j++) {
            if (array[i] == array2[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int k = 0; k < i; k++) {
                if (array[k] == array[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = i+1; k < SIZE; k++) {
                    if (array[k] == array[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) { 
                    arr3[countOne] = array[i]; 
                    countOne++;
                }
                else {
                    arr4[countTwo] = array[i];
                    countTwo++;
                }
            }
        }
    }

   for (int i = 0, flag; i < SIZE; i++) {
       flag = true;
       for (int j = 0; j < SIZE; j++) {
           if (array2[i] == array[j]) {
               flag = false;
               break;
           }
       }
       if (flag) {
           for (int k = 0; k < i; k++) {
               if (array2[k] == array2[i]) {
                   flag = false;
                   break;
               }
           }
           if (flag) {
               for (int k = i + 1; k < SIZE; k++) {
                   if (array2[k] == array2[i]) {
                       flag = false;
                       break;
                   }
               }
               if (flag) {
                   arr3[countOne] = array[i];
                   countOne++;
               }
               else {
                   arr4[countTwo] = array[i];
                   countTwo++;
               }
           }
       }
   }
   for (int i = 0; i < SIZE3; i++) {
       if (arr3[i] = 0) break;
       else cout << arr3[i] << " ";
   }
}

