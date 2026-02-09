#include <iostream>
using namespace std;

int main() {
	int m;
	setlocale(0, "");

	cout << "Месяца года\n";
	cout << "[ 1 ] Январь\n";
	cout << "[ 2 ] Февраль\n";
	cout << "[ 3 ] Март\n";
	cout << "[ 4 ] Апрель\n";
	cout << "[ 5 ] Май\n";
	cout << "[ 6 ] Июнь\n";
	cout << "[ 7 ] Июль\n";
	cout << "[ 8 ] Август\n";
	cout << "[ 9 ] Сентябрь\n";
	cout << "[ 10 ] Октябрь\n";
	cout << "[ 11 ] Ноябрь\n";
	cout << "[ 12 ] Декабрь\n";

	cout << "Выберите месяц: ";
	cin >> m;

	switch (m) {
	case 1:  cout << "Выбран месяц \"Январь\""; break;
	case 2:  cout << "Выбран месяц \"Февраль\""; break;
	case 3:  cout << "Выбран месяц \"Март\""; break;
	case 4:  cout << "Выбран месяц \"Апрель\""; break;
	case 5:  cout << "Выбран месяц \"Май\""; break;
	case 6:  cout << "Выбран месяц \"Июнь\""; break;
	case 7:  cout << "Выбран месяц \"Июль\""; break;
	case 8:  cout << "Выбран месяц \"Август\""; break;
	case 9:  cout << "Выбран месяц \"Сентябрь\""; break;
	case 10: cout << "Выбран месяц \"Октябрь\""; break;
	case 11: cout << "Выбран месяц \"Ноябрь\""; break;
	case 12: cout << "Выбран месяц \"Декабрь\""; break;
	default: cout << "Не правильно введен номер месяца!"; break;
	}

	return 0;
}
