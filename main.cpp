#include <iostream>
#include <vector>
#include <fstream> //ifstream, ofstram
#include <string> //string,getline
#include <windows.h>

using namespace std;

void practice3();
void test();

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    test();
}

void practice3() {
    //1 Задание


    //2 Задание

    //3 Задание

    //4 Задание
    int a, b, a1, b1, r;
    int rez1, rez2;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    a1 = a;
    b1 = b;

    if (a == 0 && b == 0) {
        cout << "HOД не определен";
        return;
    }
    else if (a == 0) {
        cout << "HOД: " << b;
        return;
    }
    else if (b == 0) {
        cout << "HOД: " << a;
        return;
    }

    //Способ делением
    while (true) {
        if (a % b == 0) {
            rez1 = b;
            cout << "НОД делением: " << rez1 << endl;
            break;
        }
        else {
            r = a % b;
            a = b;
            b = r;
        }
    }

    //Способ вычитанием
    while (true) {
        if (a1 == b1) {
            rez2 = a1;
            cout << "НОД вычитанием: " << rez2;
            break;
        }
        else {
            if (a1 > b1) {
                a1 = a1 - b1;
            }
            else {
                b1 = b1 - a1;
            }
        }
    }

    //Доделать!
    //5 Задание
    int n;
    cin >> n;
    int p = 2;
    vector <bool> mass(n + 1);
    mass[0], mass[1] = false, false;
    for (int i = 2; i <= n; i++) {
        mass[i] = true;
    }
    while (p <= n) {
        if (mass[p]) {
            for (int j = p + p; j <= n; j += p) {
                mass[j] = false;
            }
            p++;
        }
    }
    for (int k = 0; k <= size(mass); k++) {
        if (mass[k]) {
            cout << k;
        }
    }

    //6 Задание

}

void test() {
    setlocale(LC_ALL, "Russian");
    //Задание 1
    ofstream Zapiss("NoviiFail.txt");
    Zapiss << "Запись в первую строку" << endl;
    Zapiss << "Запись во вторую строку" << endl;
    Zapiss.close();
    ifstream Chtenie("NoviiFail.txt");
    string stroka;
    while (getline(Chtenie, stroka)) {
        cout << stroka << endl;
    }
    Chtenie.close();

}