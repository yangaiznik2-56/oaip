#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int month, day;

	cout << "Календарь" << endl;
	cout << "[ 1 ] Январь" << endl;
	cout << "[ 2 ] Февраль" << endl;
	cout << "[ 3 ] Март" << endl;
	cout << "[ 4 ] Апрель" << endl;
	cout << "[ 5 ] Май" << endl;
	cout << "[ 6 ] Июнь" << endl;
	cout << "[ 7 ] Июль" << endl;
	cout << "[ 8 ] Август" << endl;
	cout << "[ 9 ] Сентябрь" << endl;
	cout << "[ 10 ] Октябрь" << endl;
	cout << "[ 11 ] Ноябрь" << endl;
	cout << "[ 12 ] Декабрь" << endl;

	cout << "Выберите месяц: ";
	cin >> month;

	switch (month) {
	case 1:  cout << "Выбран месяц - \"Январь\"" << endl; break;
	case 2:  cout << "Выбран месяц - \"Февраль\"" << endl; break;
	case 3:  cout << "Выбран месяц - \"Март\"" << endl; break;
	case 4:  cout << "Выбран месяц - \"Апрель\"" << endl; break;
	case 5:  cout << "Выбран месяц - \"Май\"" << endl; break;
	case 6:  cout << "Выбран месяц - \"Июнь\"" << endl; break;
	case 7:  cout << "Выбран месяц - \"Июль\"" << endl; break;
	case 8:  cout << "Выбран месяц - \"Август\"" << endl; break;
	case 9:  cout << "Выбран месяц - \"Сентябрь\"" << endl; break;
	case 10: cout << "Выбран месяц - \"Октябрь\"" << endl; break;
	case 11: cout << "Выбран месяц - \"Ноябрь\"" << endl; break;
	case 12: cout << "Выбран месяц - \"Декабрь\"" << endl; break;

	default:
		cout << " ! Неправильно введен номер месяца!" << endl;
		return 0;
	}

	cout << "Выберите день месяца: ";
	cin >> day;

	switch (day) {
	case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
	case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
	case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
	case 31:
		cout << "[ + ] Календарь: " << day << " ";

		switch (month) {
		case 1:  cout << "января."; break;
		case 2:  cout << "февраля."; break;
		case 3:  cout << "марта."; break;
		case 4:  cout << "апреля."; break;
		case 5:  cout << "мая."; break;
		case 6:  cout << "июня."; break;
		case 7:  cout << "июля."; break;
		case 8:  cout << "августа."; break;
		case 9:  cout << "сентября."; break;
		case 10: cout << "октября."; break;
		case 11: cout << "ноября."; break;
		case 12: cout << "декабря."; break;
		default: cout << "???"; break;
		}

		cout << endl;
		break;

	default:
		cout << " ! Неправильно введен день месяца!" << endl;
		break;
	}

	return 0;
}