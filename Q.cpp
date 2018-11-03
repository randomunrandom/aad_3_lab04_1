//
// Created by danai on 9/20/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    a=new int[n];
}

Q::Q(int nn) {
    n=nn;
    a=new int[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new int[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

void Q::user_input() {
    cout << "введите количество элементов(N), больше 4: ";
    cin >> n;
    while (n<=4) {
        cout << "введите положительное количество элементов(N), больше 4: " ;
        cin >> n;
    }
    a = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i  << " элемент: ";
        cin >> a[i];
    }
}

int Q::fun(int k, int l) {
    float res;
    for (int i = l; i <= k; ++i) res += a[i];
    res/=(k-l+1);
    return res;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}

int Q::getN() const {
    return n;
}
