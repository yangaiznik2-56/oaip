#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(0, "");
    srand(time(0));

    int menu;

    while (true) {
        cout << "Меню" << endl;
        cout << "[ 1 ] Начать игру" << endl;
        cout << "[ 2 ] Выйти" << endl;
        cout << "Выберите пункт: ";
        cin >> menu;

        if (menu == 2) {
            cout << "Выход..." << endl;
            break;
        }
        else if (menu == 1) {
            int a = rand() % 10 + 1;
            int b = rand() % 10 + 1;
            int c = rand() % 10 + 1;

            while (b == a) b = rand() % 10 + 1;
            while (c == a || c == b) c = rand() % 10 + 1;

            int attempts = 5;
            int guessed = 0;

            bool ga = false, gb = false, gc = false;

            while (attempts > 0 && guessed < 3) {
                int x;

                cout << "Угаданных чисел: [ " << guessed << " / 3 ]" << endl;
                cout << "Попыток: [ " << attempts << " ]" << endl;
                cout << "Угадать число: ";
                cin >> x;

                if (x < 1 || x > 10) {
                    cout << "Ошибка! Введите число от 1 до 10." << endl;
                    continue;
                }

                attempts--;

                if ((x == a && !ga) and (x == b && !gb) and (x == c && !gc)) {
                    cout << "Вы угадали число!" << endl;

                    if (x == a) ga = true;
                    if (x == b) gb = true;
                    if (x == c) gc = true;

                    guessed++;
                }
                else {
                    cout << "Вы не угадали число!" << endl;
                }
            }

            if (guessed == 3) {
                cout << "Победа! Вы угадали все 3 числа!" << endl;
            }
            else {
                cout << "Проигрыш! Попытки закончились." << endl;
                cout << "Загаданные числа: " << a << ", " << b << ", " << c << endl;
            }
        }
        else {
            cout << "Неверный пункт меню!" << endl;
        }
    }

    return 0;
}
