#include <iostream>
#include <Windows.h>

using namespace std;

struct Address {
	string city;
	string street;
	int numberHouse = 0;
	int numberApartments = 0;
	int index = 0;
};

Address* AddStruct(Address* Obj, const int counter)
{
	if (counter == 0)
	{
		Obj = new Address[counter + 1]; // выделение памяти для первой структуры
	}
	else
	{
		Address* temparr = new Address[counter + 1];

		for (int i = 0; i < counter; i++)
		{
			temparr[i] = Obj[i]; // копируем во временный объект
		}
		delete[] Obj;

		Obj = temparr;
	}
	return Obj;
}

void addAdress(Address* p, const int counter) {
	
	cin.sync();
	cout << "Город: ";
	cin >> p[counter].city;
	cin.sync();
	cout << "Улица: ";
	cin >> p[counter].street;
	cin.sync();
	cout << "Номер дома: ";
	cin >> p[counter].numberHouse;
	cin.sync();
	cout << "Номер квартиры: ";
	cin >> p[counter].numberApartments;
	cin.sync();
	cout << "Индекс: ";
	cin >> p[counter].index;
}

void showAddress(Address* arr, int counter) {

	system("cls");
	cout << "№  " << "Город\t" << "Улица\t\t" << "№ дома\t" << "№ квартиры\t" << "Индекс\t" << endl;
	cout << "========================================================================" << endl;
	for (int i = 0; i < counter; i++) 
		cout << i + 1 << "  " << arr[i].city << '\t' << arr[i].street << '\t' << '\t' << arr[i].numberHouse << '\t' << arr[i].numberApartments << '\t' << '\t' << arr[i].index << endl;
	cout << endl << endl;

}

void deleteAdress(Address* arr) {
	delete[] arr;
}

int main() {

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Address* adress_arr = nullptr;
	Address newAdress;

	int counter = 0;
	int choice = 0;
	do {
		cout << "Меню" << endl;
		cout << "1 - Добавить адрес в базу" << endl;
		cout << "2 - Вывести все адреса на экран" << endl;
		cout << "0 - Выйти из программы" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1: 	
			adress_arr = AddStruct(adress_arr, counter);
			addAdress(adress_arr, counter);
			counter++; break;
		case 2:showAddress(adress_arr, counter); break;

		default:
			break;
		}
	
	
	} while (choice != 0);

	deleteAdress(adress_arr);

	return 0;
}













