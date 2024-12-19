
#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    // Задание 1
    cout << "int = " << sizeof(int) << " байт" << "\n";
    cout << "short int = " << sizeof(short int) << " байт" << "\n";
    cout << "long int = " << sizeof(long int) << " байт" << "\n";
    cout << "float = " << sizeof(float) << " байт" << "\n";
    cout << "double = " << sizeof(double) << " байт" << "\n";
    cout << "long double = " << sizeof(long double) << " байт" << "\n";
    cout << "char = " << sizeof(char) << " байт" << "\n";
    cout << "bool = " << sizeof(bool) << " байт" << "\n" << endl;
    // Задания 2,3,4
    int dtypes;
    do {
        cout << "Задания на двоичное представление" << "\n" << "Для представления числа типа int введите 1" << "\n" << "Для представления числа типа float введите 2" << "\n" << "Для представления числа типа double введите 3" << "\n" << "Для выхода введите 0" << "\n";
        cin >> dtypes;
        while (dtypes != 1 && dtypes != 2 && dtypes != 3 && dtypes != 0) {
            cout << "Некорректный ввод" << "\n";
            cin >> dtypes;
        }
        int number1, rep = 0, inverted = 0, inv = 1, newn = 1;
        unsigned int mask;
        switch (dtypes) {

        case 1:
            // Задание 2
            do {
                cout << "Число типа int: ";
                cin >> number1;
                do {
                    mask = 1 << (sizeof(int) * 8 - 1);
                    if (inverted == 1) {
                        number1 = ~number1;
                    }
                    for (int i = 0; i < sizeof(int) * 8; i++, mask >>= 1) {
                        if (number1 & mask) {
                            cout << '1';
                        }
                        else {
                            cout << '0';
                        }
                        if (i % 8 == 0) {
                            cout << " ";
                        }
                    }
                    cout << "\n" << "Число: " << number1;
                    cout << "\n" << "Вы хотите инвертировать данное число? [1/0]" << "\n";
                    cin >> inv;
                    while (inv != 1 && inv != 0) {
                        cout << "Некорректный ввод" << "\n";
                        cin >> inv;
                    }
                    if (inv == 1) {
                        inverted = 1;
                    }
                    else {
                        inverted = 0;
                        cout << "\n" << "Выбрать новое число типа int? [1/0]" << "\n";
                        cin >> newn;
                        while (newn != 1 && newn != 0) {
                            cout << "Некорректный ввод" << "\n";
                            cin >> newn;
                        }

                    }
                } while (inv == 1);
            } while (newn == 1);
            cout << "\n";
            break;

        case 2:
            // Задание 3
            union {
                float number2;
                int in2;
            };
            do {
                cout << "Введите число типа float: ";
                cin >> number2;
                do {
                    mask = 1 << (sizeof(float) * 8 - 1);
                    if (inverted == 1) {
                        in2 = ~in2;
                    }
                    for (int i = 0; i < sizeof(float) * 8; i++, mask >>= 1) {
                        if (in2 & mask) {
                            cout << '1';
                        }
                        else {
                            cout << '0';
                        }
                        if (i == 0 || i == 8) {
                            cout << " ";
                        }
                    }
                    cout << "\n" << "Число: " << number2;
                    cout << "\n" << "Вы хотите инвертировать данное число? [1/0]" << "\n";
                    cin >> inv;
                    while (inv != 1 && inv != 0) {
                        cout << "Некорректный ввод" << "\n";
                        cin >> inv;
                    }
                    if (inv == 1) {
                        inverted = 1;
                    }
                    else {
                        inverted = 0;
                        cout << "\n" << "Выбрать новое число типа float? [1/0]" << "\n";
                        cin >> newn;
                        while (newn != 1 && newn != 0) {
                            cout << "Некорректный ввод" << "\n";
                            cin >> newn;
                        }
                    }
                } while (inv == 1);
            } while (newn == 1);
            break;
            cout << "\n";

        case 3:
            // Задание 4
            union {
                double number3;
                int d[2];
            };
            do {
                cout << "Введите число типа double: ";
                cin >> number3;
                do {
                    mask = 1 << (sizeof(int) * 8 - 1);
                    if (inverted == 1) {
                        d[1] = ~d[1];
                        d[0] = ~d[0];
                    }
                    for (int i = 0; i < sizeof(int) * 8; i++, mask >>= 1) {
                        if (d[1] & mask) {
                            cout << '1';
                        }
                        else {
                            cout << '0';
                        }
                        if (i == 0 || i == 11) {
                            cout << " ";
                        }
                    }
                    mask = 1 << (sizeof(int) * 8 - 1);
                    for (int i = 0; i < sizeof(int) * 8; i++, mask >>= 1) {
                        if (d[0] & mask) {
                            cout << '1';
                        }
                        else {
                            cout << '0';
                        }
                    }
                    cout << "\n" << "Число: " << number3;
                    cout << "\n" << "Вы хотите инвертировать данное число? [1/0]" << "\n";
                    cin >> inv;
                    while (inv != 1 && inv != 0) {
                        cout << "Некорректный ввод" << "\n";
                        cin >> inv;
                    }
                    if (inv == 1) {
                        inverted = 1;
                    }
                    else {
                        inverted = 0;
                        cout << "\n" << "Выбрать новое число типа double? [1/0]" << "\n";
                        cin >> newn;
                        while (newn != 1 && newn != 0) {
                            cout << "Некорректный ввод" << "\n";
                            cin >> newn;
                        }
                    }
                } while (inv == 1);
            } while (newn == 1);
            break;
            cout << "\n";
        }
    } while (dtypes != 0);
}

