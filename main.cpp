//
// created by Danil Kireev, PFUR NFI-201, 20.09.18, 09:00
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 22
 * Дан массив размера N и целые числа K и L ( 1 < K < L < N ).
 * Найти среднее арифметическое элементов массива с номерами от K до L включительно.
 */

int main() {
    cout << "нахождение среднего арифметическое элементов массива с номерами от K до L включительно" << endl;
    Q *z;
    int nn, k, l;
    float *res;
    cout << "введите кол-во массивов(NN): ";
    cin >> nn;
    while (nn <= 0) {
        cout << "введите положительное кол-во массивов(N)" << endl;;
        cin >> nn;
    }
    z = new Q[nn];
    res = new float[nn];
    for (int i = 0; i < nn; ++i) {
        cout << "заполните " << i << " массив" << endl;
        z[i].user_input();
        z[i].print();
        cout << "введите число(K): ";
        cin >> k;
        while ((k <= 1) || (k >= z[i].getN())) {
            cout << "введите положительное число(K) больше 1";
            cin >> k;
        }
        cout << "введите число(L): ";
        cin >> l;
        while ((l <= k) || (l >= z[i].getN())) {
            cout << "введите положительное число(L)";
            cin >> l;
        }
        res[i] = z[i].fun(l, k);

    }
    for (int i = 0; i < nn; ++i) {
        cout << "среднее арифметическое элементов " << i << " массива равно " << res[i] << endl;
    }

    return 0;
}