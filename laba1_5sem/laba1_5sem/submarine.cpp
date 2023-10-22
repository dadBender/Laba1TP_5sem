#include "submarine.h"
#include <iostream>
#include <string>
using namespace std;
Submarine::Submarine() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� (��������� �����)" << endl << endl;
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
	cout << "����� ������������ ����������� (��������� �����)" << endl << endl;
	*this = other;
}
Submarine::~Submarine() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� (��������� �����)" << endl << endl;
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
ofstream& operator<<(ofstream& fout, Submarine& obj) { // ������� ������ � ���� ������(������)
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
ifstream& operator>>(ifstream& fin, Submarine& obj) { // ������� ������ ����� ������� (������)
		fin >> obj.lenght 
			>> obj.weight
			>> obj.crew
			>> obj.time_underwater
			>> obj.speed_underwater
			>> obj.armament;
			//>> obj.material
	return fin;
}



ostream& operator<<(ostream& out, Submarine& obj) { // ������� ������ �� ����� ������ �������(������)
		setlocale(LC_ALL, "Russian");
	out << "�����: " << obj.lenght << endl; //�����
	out << "������: " << obj.weight << endl; //�����
	out << "������: " << obj.crew << endl;  //�����
	out << "����� ������������ ���������� ��� �����: " << obj.time_underwater << endl; //�����
	out << "������������ ��������� ��������: " << obj.speed_underwater << endl;  //����� ���������
	out << "����������: " << obj.armament << endl; //�����
	//�� �����
	//out << "��������: " << obj.material << endl;
	return out;
}
istream& operator>>(istream& in, Submarine& obj) { // ������� ����� ������ ������� (������)
		
		setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;

	while (1) {
		cout << "�����: ";
		cin >> obj.lenght;
		if (cin.fail() || obj.lenght < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}

	while (1) {
		cout << "������: ";
		cin >> obj.weight;
		if (cin.fail() || obj.weight < 0) {
			cout << "������������ ������, ������� ������!" << endl;
				cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}

	while (1) {
		cout << "������: ";
		cin >> obj.crew;
		if (cin.fail() || obj.crew < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}

	while (1) {
		cout << "����� ������������ ���������� ��� �����: ";
		cin >> obj.time_underwater;
		if (cin.fail() || obj.time_underwater < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "������������ ��������� ��������: ";
		cin >> obj.speed_underwater;
		if (cin.fail() || obj.speed_underwater < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}

	cout << "����������: ";
	getchar();
	getline(cin, obj.armament);

	/*cout << "����: ";
	cin >> obj.speed_underwater;
	cout << "��������: ";
	cin >> obj.material;*/
	return in;
}