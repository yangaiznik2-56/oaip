#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    cout << "Введите число: ";
    int number;
    cin >> number;

    int a = 1;

    while (a <= 9) {
        cout << "Решите пример: " << number << " x " << a << endl;

        int answ;
        cin >> answ;

        if (answ == number * a) {
            cout << "Ответ: " << answ << endl;
            cout << "Пример решен правильно!" << endl;
            a = a + 1;
        }
        else {
            cout << "Ошибка, пример решен неверно!" << endl;
            return 0;
        }
    }

    cout << "Все примеры решены!" << endl;
    return 0;
}
