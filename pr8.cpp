#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int menu;

	cout << "Переводчик" << endl;
	cout << "[ 1 ] Русские слова" << endl;
	cout << "[ 2 ] Английские слова" << endl;
	cout << "[ 3 ] Выйти" << endl;
	cout << "Выберите пункт: ";
	cin >> menu;

	switch (menu) {
	case 1: {
		int word;

		cout << "Переводчик \"Список русских слов\"" << endl;
		cout << "[ 1 ] Дом" << endl;
		cout << "[ 2 ] Дорога" << endl;
		cout << "[ 3 ] Книга" << endl;
		cout << "[ 4 ] Окно" << endl;
		cout << "[ 5 ] Стол" << endl;
		cout << "[ 6 ] Вода" << endl;
		cout << "[ 7 ] Солнце" << endl;
		cout << "[ 8 ] Ночь" << endl;
		cout << "[ 9 ] Город" << endl;
		cout << "[ 10 ] Машина" << endl;
		cout << "[ 11 ] Телефон" << endl;
		cout << "[ 12 ] Работа" << endl;
		cout << "[ 13 ] Еда" << endl;
		cout << "[ 14 ] Друг" << endl;
		cout << "[ 15 ] Время" << endl;

		cout << "Выберите номер слова: ";
		cin >> word;

		switch (word) {
		case 1:  cout << "Перевод: дом > house" << endl; break;
		case 2:  cout << "Перевод: дорога > road" << endl; break;
		case 3:  cout << "Перевод: книга > book" << endl; break;
		case 4:  cout << "Перевод: окно > window" << endl; break;
		case 5:  cout << "Перевод: стол > table" << endl; break;
		case 6:  cout << "Перевод: вода > water" << endl; break;
		case 7:  cout << "Перевод: солнце > sun" << endl; break;
		case 8:  cout << "Перевод: ночь > night" << endl; break;
		case 9:  cout << "Перевод: город > city" << endl; break;
		case 10: cout << "Перевод: машина > car" << endl; break;
		case 11: cout << "Перевод: телефон > phone" << endl; break;
		case 12: cout << "Перевод: работа > work" << endl; break;
		case 13: cout << "Перевод: еда > food" << endl; break;
		case 14: cout << "Перевод: друг > friend" << endl; break;
		case 15: cout << "Перевод: время > time" << endl; break;

		default:
			cout << "[ ! ] Неправильно введен номер слова!" << endl;
			break;
		}
		break;
	}

	case 2: {
		int word;

		cout << "[ + ] Переводчик \"Список английских слов\"" << endl;
		cout << "[ 1 ] House" << endl;
		cout << "[ 2 ] Road" << endl;
		cout << "[ 3 ] Book" << endl;
		cout << "[ 4 ] Window" << endl;
		cout << "[ 5 ] Table" << endl;
		cout << "[ 6 ] Water" << endl;
		cout << "[ 7 ] Sun" << endl;
		cout << "[ 8 ] Night" << endl;
		cout << "[ 9 ] City" << endl;
		cout << "[ 10 ] Car" << endl;
		cout << "[ 11 ] Phone" << endl;
		cout << "[ 12 ] Work" << endl;
		cout << "[ 13 ] Food" << endl;
		cout << "[ 14 ] Friend" << endl;
		cout << "[ 15 ] Time" << endl;

		cout << "[ + ] Выберите номер слова: ";
		cin >> word;

		switch (word) {
		case 1:  cout << "Перевод: house -> дом" << endl; break;
		case 2:  cout << "Перевод: road -> дорога" << endl; break;
		case 3:  cout << "Перевод: book -> книга" << endl; break;
		case 4:  cout << "Перевод: window -> окно" << endl; break;
		case 5:  cout << "Перевод: table -> стол" << endl; break;
		case 6:  cout << "Перевод: water -> вода" << endl; break;
		case 7:  cout << "Перевод: sun -> солнце" << endl; break;
		case 8:  cout << "Перевод: night -> ночь" << endl; break;
		case 9:  cout << "Перевод: city -> город" << endl; break;
		case 10: cout << "Перевод: car -> машина" << endl; break;
		case 11: cout << "Перевод: phone -> телефон" << endl; break;
		case 12: cout << "Перевод: work -> работа" << endl; break;
		case 13: cout << "Перевод: food -> еда" << endl; break;
		case 14: cout << "Перевод: friend -> друг" << endl; break;
		case 15: cout << "Перевод: time -> время" << endl; break;

		default:
			cout << " ! Неправильно введен номер слова!" << endl;
			break;
		}
		break;
	}

	case 3:
		cout << "Выход..." << endl;
		break;

	default:
		cout << " ! Неправильно выбран пункт меню!" << endl;
		break;
	}

	return 0;
}