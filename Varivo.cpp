#include <iostream>
using namespace std;

int main() {

	setlocale(0, "");
	cout << "Вас приветствует игра <<Викторина!>>\n\n\n";
	cout << "Нажмите для продолжения 1" << endl;
	short prodolgenie = 1;
	cin >> prodolgenie;
	system("cls");
	cout << "[+] Меню\n\n\n";
	cout << "[1] Начать игру\n" << "[2] Настройки\n" << "[3] Правила\n" << "[4] Выйти\n\n";
	cout << "Выберите пункт меню: ";
	short menu;
	cin >> menu;
	system("cls");
	if (menu == 3) {
		cout << "[+] Правила\n\n\n";
		cout << "[-] Игрок получает очки за правильный ответ на вопрос\n" << "[-] Игрок проходит дальше за правильный ответ\n" << "[-] Игрок теряет жизнь при неправильном ответе\n";
		cout << "[0] Вернуться в главное меню\n\n";
		cout << "Выберите пункт меню: ";
		short pravila;
		cin >> pravila;
		system("cls");
		if (pravila == 0) {
			cout << "[+] Меню\n\n\n";
			cout << "[1] Начать игру\n" << "[2] Настройки\n" << "[3] Правила\n" << "[4] Выйти\n\n";
			cout << "Выберите пункт меню: ";
			short menu;
			cin >> menu;
			system("cls");
		}
	
	}
	else if (menu == 2) {
		cout << "[+] Настройки\n\n\n";
		cout << "[1] Редактирование имя игрока\n" << "[2] Редактирование вопросов в игре\n" << "[3] Редактирование цвета интерфейса\n";
		cout << "Выберите пункт меню: ";
		short nastroiki;
		cin >> nastroiki;
		system("cls");
		if (nastroiki == 1) {
			cout << "Введите имя игрока: ";
			string name;
			cin >> name;
			system("cls");
			cout << "[+] Меню\n\n\n";
			cout << "[1] Начать игру\n" << "[2] Настройки\n" << "[3] Правила\n" << "[4] Выйти\n\n";
			cout << "Выберите пункт меню: ";
			short menu;
			cin >> menu;
			system("cls");
		}
		else if (nastroiki == 2) {
			cout << "[+] Редактировать вопросы\n\n\n";
			cout << "[1] 8 вопросов" << "[2] 10 вопросов" << "[3] 12 вопросов";
			short vopros;
			cin >> vopros;

		}


	}
	else if (menu == 1) {
		cout << "[+] Начать игру";
	}
	else if (menu == 4) {
		cout << "Выход...\n\n\n";
	}


	
	return 0;
}
