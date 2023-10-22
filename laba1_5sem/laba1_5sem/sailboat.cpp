#include "sailboat.h"
#include <iostream>
#include <string>
using namespace std;
Sailboat::Sailboat() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� (��������)" << endl << endl;
	type = "";
	name = "";
	peaceful_military = "";
	
	body_length = 0;
	speed = 0;
	crew = 0;

}
Sailboat::Sailboat(const Sailboat& other) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� (��������)" << endl << endl;
	*this = other;
}
Sailboat::~Sailboat() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� (��������)" << endl << endl;
}
void Sailboat::setVal() {
		cin >> *this;
}
Sailboat& Sailboat::operator=(const Sailboat& other) {
	this->type = other.type;
	this->name = other.name;
	this->peaceful_military = other.peaceful_military;
	this->body_length = other.body_length;
	this->speed = other.speed;
	this->crew = other.crew;
	return *this;
}
ofstream& operator<<(ofstream& fout, Sailboat& obj) { // ������� ������ � ���� �������(��������)
	fout << obj.type << " " << endl;
	fout << obj.name << " " << endl;
	fout << obj.peaceful_military << " " << endl;
	fout << obj.body_length << " " << endl;
	fout << obj.speed << " " << endl;
	fout << obj.crew << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Sailboat& obj) { // ������� ������ ����� ������� (��������)
	fin
		>> obj.type
		>> obj.name
		>> obj.peaceful_military
		>> obj.body_length
		>> obj.speed
		>> obj.crew;
	return fin;
}
ostream& operator<<(ostream& out, Sailboat& obj) { // ������� ������ �� ����� ������ �������(��������)
		setlocale(LC_ALL, "Russian");
	out << "��� ���������: " << obj.type << endl;
	out << "��������: " << obj.name << endl;
	out << "������ ��� �������: " << obj.peaceful_military << endl;
	out << "����� �������: " << obj.body_length << endl << endl;
	out << "�������� ����������: " << obj.speed << endl << endl;//�������
	out << "������: " << obj.crew << endl << endl;//�������
	
	return out;
}

istream & operator>>(istream & in, Sailboat & obj) { // ������� ����� ������ ������� (��������)
		setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "��� ���������: ";
	cin >> obj.type;
	cout << "��������: ";
	cin >> obj.name;
	cout << "������ ��� �������: ";		
	cin >> obj.peaceful_military;		
	
	while (1) {
		cout << "����� �������: ";
		cin >> obj.body_length;
		if (cin.fail() || obj.body_length < 0) { // �������� �� ������������ �����
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}

	while (1) {
		cout << "�������� ����������: ";
		cin >> obj.speed;
		if (cin.fail() || obj.speed < 0) { // �������� �� ������������ �����
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
		if (cin.fail() || obj.crew < 0) { // �������� �� ������������ �����
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	
	return in;
}