#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

void exercise1();
void exercise4();

int main() {
    setlocale(LC_ALL, "Russian"); 

    exercise1();

    cout << endl;
    cin.ignore();
    cin.get();

    exercise4();

    return 0;
}

void exercise1() {
    cout << "Упр 1. Функции для работы со строками" << endl;
    cout << "---------------------------------------------" << endl;

    cout << "\n[Часть 1] С-строки (тип char)" << endl;

    char str1[50] = "Привет,";
    char str2[50] = "ТГУ";
    char result[100];

    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);

    int cLength = strlen(result);

    cout << "Результат работы C-функций: " << result << endl;
    cout << "Длина строки (strlen): " << cLength << endl;

    cout << "\n[Часть 2] Строки C++ (тип string)" << endl;

    string s1 = "Программирование";
    string s2 = " на C++";
    string sResult;

    int cppLength = s1.length();
    cout << "Длина первой строки (length): " << cppLength << endl;

    sResult = s1;
    sResult.append(s2);
    cout << "Результат объединения (append): " << sResult << endl;

    string sub = sResult.substr(0, 11);
    cout << "Подстрока (substr): " << sub << endl;
}

void exercise4() {
    cout << "Упр 4. Массив строк и вывод четных слов" << endl;
    cout << "-----------------------------------------------" << endl;

    const int MAX_COUNT = 20;
    const int MAX_LEN = 10;

    cout << "\n[Вариант 1] Массив C-строк (char)" << endl;

    char wordsC[MAX_COUNT][MAX_LEN + 1];
    int n;

    cout << "Введите количество слов (не более 20): ";
    cin >> n;
    if (n > MAX_COUNT) n = MAX_COUNT;

    cout << "Введите " << n << " слов (макс 10 символов каждое):" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> wordsC[i];
    }

    cout << "\nСлова с четными номерами (2-е, 4-е, ...):" << endl;
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 0) {
            cout << "  " << wordsC[i] << endl;
        }
    }

    cout << "\n[Вариант 2] Массив строк C++ (string)" << endl;

    string wordsCpp[MAX_COUNT];
    int n2;

    cout << "Введите количество слов (не более 20): ";
    cin >> n2;
    if (n2 > MAX_COUNT) n2 = MAX_COUNT;

    cout << "Введите " << n2 << " слов" << endl;
    for (int i = 0; i < n2; ++i) {
        cin >> wordsCpp[i];
    }

    cout << "\nСлова с четными номерами (2-е, 4-е, ...):" << endl;
    for (int i = 0; i < n2; ++i) {
        if ((i + 1) % 2 == 0) {
            cout << "  " << wordsCpp[i] << endl;
        }
    }
}
