#include <iostream>
#include <Windows.h>

using namespace std;

struct Account {

	string Name;
	int numberAccount = 0;
	double balance = 0;

};

void changeBalance(Account& p) {
	cout << "¬ведите новый баланс: ";
	cin >> p.balance;
}

void print(Account& p) {

	cout << "¬аш счЄт: " << p.Name << ", " << p.numberAccount << ", " << p.balance << endl;

}

int main() {

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Account MyAccount;

	cout << "¬ведите номер счЄта: ";
	cin >> MyAccount.numberAccount;
	cout << "¬ведите им€ владельца: ";
	cin.sync();
	cin >> MyAccount.Name;
	cout << "¬ведите баланс: ";
	cin.sync();
	cin >> MyAccount.balance;

	print(MyAccount);
	changeBalance(MyAccount);
	print(MyAccount);

	return 0;

}