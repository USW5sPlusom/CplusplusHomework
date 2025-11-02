#include <iostream>
#include <vector>
#include <fstream> //ifstream, ofstram
#include <string> //string,getline
#include <windows.h>
#include <cctype> //isdigit
#include <algorithm> //sort

using namespace std;

void practice3();
void test();

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    test();
}

void practice3() {
    // //Задание 1
    // ofstream Zapiss("NoviiFail.txt");
    // Zapiss <<  "s9ade68fas986bf9df678a9678aewf67b9fabew6978f6789b6aew79bf9678ee6abw79fb69aewb9" << endl;
    // Zapiss <<  "d78fb6fa6789f79s8e78969678a6bfw37896" << endl;
    // Zapiss <<  "af9786b4n34qw6798n32572nn5347890v70f4j78425j700ks" << endl;
    // Zapiss.close();
    // ifstream Chtenie("NoviiFail.txt");
    // string stroka;
    // while (getline(Chtenie, stroka)) {
    //     cout << stroka << endl;
    // }
    // Chtenie.close();

    // //2 Задание
    // ifstream Chtenie("NoviiFail.txt");
    // string stroka;
    // string stroka_vivod;
    // while (getline(Chtenie, stroka)) {
    //     stroka_vivod = "";
    //     for (char s : stroka) {
    //         if (isdigit(s)) {
    //             stroka_vivod += s;
    //         }
    //     }
    //     cout << stroka_vivod << endl;
    // }
    // Chtenie.close();

    // //3 Задание
    // string vvod, vivod;
    // cin >> vvod;
    // for (char c : vvod) {
    //     if (!isalpha(c)) {
    //         cout << "Посторонние символы";
    //         return;
    //     }
    //     else if (vvod.length() > 30) {
    //         cout << "Больше 30ти симовлов";
    //         //return
    //         vvod = vvod.substr(0, 30);
    //     }
    // }
    // string eng, rus;
    // for (char c : vvod) {
    //     if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
    //         eng += c;
    //     }
    //     else {
    //         rus += c;
    //     }
    // }
    // sort(eng.begin(), eng.end());
    // sort(rus.begin(), rus.end());
    // vivod = eng + " " + rus;
    // cout << vivod;

    // //4 Задание
    // int a, b, a1, b1, r;
    // int rez1, rez2;
    // cin >> a >> b;
    // a = abs(a);
    // b = abs(b);
    // a1 = a;
    // b1 = b;
    //
    // if (a == 0 && b == 0) {
    //     cout << "HOД не определен";
    //     return;
    // }
    // else if (a == 0) {
    //     cout << "HOД: " << b;
    //     return;
    // }
    // else if (b == 0) {
    //     cout << "HOД: " << a;
    //     return;
    // }
    //
    // //Способ делением
    // while (true) {
    //     if (a % b == 0) {
    //         rez1 = b;
    //         cout << "НОД делением: " << rez1 << endl;
    //         break;
    //     }
    //     else {
    //         r = a % b;
    //         a = b;
    //         b = r;
    //     }
    // }
    //
    // //Способ вычитанием
    // while (true) {
    //     if (a1 == b1) {
    //         rez2 = a1;
    //         cout << "НОД вычитанием: " << rez2;
    //         break;
    //     }
    //     else {
    //         if (a1 > b1) {
    //             a1 = a1 - b1;
    //         }
    //         else {
    //             b1 = b1 - a1;
    //         }
    //     }
    // }

    // //5 Задание
    // int n;
    // cin >> n;
    // if (n < 2) {
    //     cout << "Простых чисел нет" << endl;
    //     return;
    // }
    // int p = 2;
    // vector <bool> mass(n + 1);
    // mass[0] = false;
    // mass[1] = false;
    // for (int i = 2; i <= n; i++) {
    //     mass[i] = true;
    // }
    // for (int p = 2; p <= n; p++) {
    //     if (mass[p]) {
    //         for (int j = p + p; j <= n; j += p) {
    //             mass[j] = false;
    //         }
    //     }
    // }
    // for (int k = 0; k < mass.size(); k++) {
    //     if (mass[k]) {
    //         cout << k << " ";
    //     }
    // }

    // //6 Задание
    // double summ = 0;
    // ofstream Zapiss("NoviiFail2.txt");
    // string num;
    // cout << "Введите 10 чисел"<< endl;
    // for (int i = 1; i <= 10; i++) {
    //     cin >> num;
    //     Zapiss << num << endl;
    // }
    // Zapiss.close();
    //
    // ifstream Chtenie("NoviiFail2.txt");
    // string line;
    // int counter = 0;
    //
    // while (getline(Chtenie, line)) {
    //     bool estt_1_tochka = false;
    //     for (int i = 0; i < line.length(); i++) {
    //         char c = line[i];
    //         if (i == 0 && c == '-') {
    //             continue;
    //         }
    //         if (isdigit(c)) {
    //             continue;
    //         }
    //         else if (c == '.' && !estt_1_tochka) {
    //             estt_1_tochka = true;
    //         }
    //         else {
    //             cout << "Посторонние символы" << line << endl;
    //             return;
    //         }
    //     }
    //     if (!line.empty()) {
    //         try {
    //             double number = stod(line);
    //             summ += number;
    //             counter++;
    //             cout << "Добавлено число: " << number << endl;
    //         } catch (...) {
    //             cout << "Ошибка преобразования" << line << endl;
    //         }
    //     }
    // }
    // if (counter == 10) {
    //     cout << "Сумма 10 чисел: " << summ << endl;
    // } else {
    //     cout << "Ошибка: найдено только " << counter << " корректных чисел из 10" << endl;
    // }

}

void test() {

}