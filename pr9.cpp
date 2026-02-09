#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int n;

	while (true) {
		cout << "[ + ] Цикл \"WHILE\"" << endl;
		cout << "[ + ] Введите число: ";
		cin >> n;

		if (n == 0) {
			cout << "[ + ] Выход..." << endl;
			break;
		}

		if (n < 1 || n > 15) {
			cout << "[ ! ] Ошибка! Введите число от 1 до 15 или 0 для выхода." << endl;
			continue;
		}

		int i = 1;
		while (i <= n) {
			cout << "[ + ] Цикл отработал. Круг: " << i << "." << endl;
			i++;
		}

		cout << "\n";
	}

	return 0;
}
