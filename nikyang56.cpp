#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int vibor;
	cout << "Введите время года" << endl;
	cout << "[1] - Лето" << endl;
	cout << "[2] - Осень" << endl;
	cout << "[3] - Зима" << endl;
	cout << "[4] - Весна" << endl;
	cout << "Введите число 1-4" << endl;
	cin >> vibor;
	if (vibor == 1) {
		cout << "Сейчас лето, оденьтесь легко";
	}
	else if (vibor == 2) {
		cout << "Сейчас осень, оденьтесь теплее и возьмите зонт";
	}
	else if (vibor == 3) {
		cout << "сейчас зима, оденьтесь очень тепло";
	}
	else if (vibor == 4) {
		cout << "сейчас весна, лучше возьмите зонт и оденьтесь тепло";
	}
	else {
		cout << "Ошибка, вы ввели число не 1-4";
	}
	int _; cin >> _;
}