#include "submarine.h"
#include <iostream>
#include <string>
using namespace std;
Submarine::Submarine() {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов конструктора по умолчанию (Подводная лодка)" << endl << endl;
	lenght = 0;
	weight = 0;
	crew = 0;
	time_underwater = 0;
	speed_underwater = 0;
	armament = "";
	//material = "";
}
Submarine::Submarine(const Submarine& other) {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов конструктора копирования (Подводная лодка)" << endl << endl;
	*this = other;
}
Submarine::~Submarine() {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов деструктора (Подводная лодка)" << endl << endl;
}
void Submarine::setVal() {
	cin >> *this;
}
Submarine& Submarine::operator=(const Submarine& other) {
	this->lenght = other.lenght;
	this->weight = other.weight;
	this->crew = other.crew;
	this->time_underwater = other.time_underwater;
	this->speed_underwater = other.speed_underwater;
	this->armament = other.armament;
	//this->material = other.material;
	return *this;
}
ofstream& operator<<(ofstream& fout, Submarine& obj) { // Функция записи в файл бъекта(Мебель)
	fout << obj.lenght << " " << endl;
	fout << obj.weight << " " << endl;
	fout << obj.crew << " " << endl;
	fout << obj.time_underwater << " " << endl;
	fout << obj.speed_underwater << " " << endl;
	fout << obj.armament << " " << endl;
	//fout << obj.material << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Submarine& obj) { // Функция чтения файла объекта (Мебель)
		fin >> obj.lenght 
			>> obj.weight
			>> obj.crew
			>> obj.time_underwater
			>> obj.speed_underwater
			>> obj.armament;
			//>> obj.material
	return fin;
}



ostream& operator<<(ostream& out, Submarine& obj) { // Функция вывода на экран данных объекта(Мебель)
		setlocale(LC_ALL, "Russian");
	out << "Длина: " << obj.lenght << endl; //лодка
	out << "Ширина: " << obj.weight << endl; //лодка
	out << "Экипаж: " << obj.crew << endl;  //лодка
	out << "Время непрерывного пребывания под водой: " << obj.time_underwater << endl; //лодка
	out << "Максимальная подводная скорость: " << obj.speed_underwater << endl;  //лодка добавлено
	out << "Вооружение: " << obj.armament << endl; //лодка
	//не нужно
	//out << "Материал: " << obj.material << endl;
	return out;
}
istream& operator>>(istream& in, Submarine& obj) { // Функция ввода данных объекта (Мебель)
		
		setlocale(LC_ALL, "Russian");
	cout << "Введите данные:" << endl << endl;

	while (1) {
		cout << "Длина: ";
		cin >> obj.lenght;
		if (cin.fail() || obj.lenght < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}

	while (1) {
		cout << "Ширина: ";
		cin >> obj.weight;
		if (cin.fail() || obj.weight < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
				cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}

	while (1) {
		cout << "Экипаж: ";
		cin >> obj.crew;
		if (cin.fail() || obj.crew < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}

	while (1) {
		cout << "Время непрерывного пребывания под водой: ";
		cin >> obj.time_underwater;
		if (cin.fail() || obj.time_underwater < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "Максимальная подводная скорость: ";
		cin >> obj.speed_underwater;
		if (cin.fail() || obj.speed_underwater < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}

	cout << "Вооружение: ";
	getchar();
	getline(cin, obj.armament);

	/*cout << "Цвет: ";
	cin >> obj.speed_underwater;
	cout << "Материал: ";
	cin >> obj.material;*/
	return in;
}