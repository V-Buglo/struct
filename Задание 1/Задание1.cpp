#include <iostream>
#include <Windows.h>

using namespace std;

enum class months {
	January=1,
	February,
	March,
	April, 
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main() {

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int change;
	months NumberMonth;

	cout << "Введите номер месяца: ";
	cin >> change;
	NumberMonth = static_cast<months>(change);

	while (change != 0) {
		switch (NumberMonth)
		{
		case months::January: cout << "Январь" << endl; break;
		case months::February: cout << "Февраль" << endl; break;
		case months::March: cout << "Март" << endl; break;
		case months::April: cout << "Апрель" << endl; break;
		case months::May: cout << "Май" << endl; break;
		case months::June: cout << "Июнь" << endl; break;
		case months::July: cout << "Июль" << endl; break;
		case months::August: cout << "Август" << endl; break;
		case months::September: cout << "Сентябрь" << endl; break;
		case months::October: cout << "Октябрь" << endl; break;
		case months::November: cout << "Ноябрь" << endl; break;
		case months::December: cout << "Декабрь" << endl; break;
		default: cout << "Неправильный номер!" << endl;
			break;
		}

	cout << "Введите номер месяца: ";
	cin >> change;
	NumberMonth = static_cast<months>(change);

	}

	return 0;

}