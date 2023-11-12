#include "boats.h"
#include <iostream>
#include <string>
using namespace std;
boats::boats() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� (������)" << endl << endl;
	purpose = "";
	housing_material = "";
	driving_qualities = "";
	speed = 0;
	capacity = 0;

}
boats::boats(const boats& other) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� (�����)" << endl << endl;
	*this = other;
}
boats::boats(string purpose, string housing_material, string driving_qualities, int speed, int capacity, boats& obj)
{
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ � ���������� (�����)" << endl << endl;
	obj.purpose = purpose;
	obj.housing_material = housing_material;
	obj.driving_qualities = driving_qualities;
	obj.speed = speed;
	obj.speed = speed;
	obj.capacity = capacity;
}
boats::~boats() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� (�����)" << endl << endl;
}
void boats::setVal() {
	cin >> *this;
}
boats& boats::operator=(const boats& other) {
	this->purpose = other.purpose;
	this->housing_material = other.housing_material;
	this->driving_qualities = other.driving_qualities;
	this->speed = other.speed;
	this->capacity = other.capacity;

	return *this;
}
ofstream& operator<<(ofstream& fout, boats& obj) { // ������� ������ � ���� ������� (�����)
	fout << obj.purpose << " " << endl;
	fout << obj.housing_material << " " << endl;
	fout << obj.driving_qualities << " " << endl;
	fout << obj.speed << " " << endl;
	fout << obj.capacity << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, boats& obj) { // ������� ������ ����� ������� (�����)
	fin
		>> obj.purpose
		>> obj.housing_material
		>> obj.driving_qualities
		>> obj.speed
		>> obj.capacity;
	return fin;
}
ostream& operator<<(ostream& out, boats& obj) { // ������� ������ �� ����� ������ �������(�����)
	setlocale(LC_ALL, "Russian");
	out << "����������: " << obj.purpose << endl;
	out << "�������� �������: " << obj.housing_material << endl;
	out << "������� ��������: " << obj.driving_qualities << endl;
	out << "������������ ��������: " << obj.speed << endl;
	out << "������������ ���������� �����, ������� ����� ���������� �� �����: " << obj.capacity << endl;

	return out;
}
istream& operator>>(istream& in, boats& obj) { // ������� ����� ������ ������� (�����)
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;

	cout << "����������:";
	getchar();
	getline(cin, obj.purpose);

	cout << "�������� �������: ";
	cin >> obj.housing_material;

	cout << "������� ��������: ";
	getchar();
	getline(cin, obj.driving_qualities);

	while (1) {
		cout << "������������ ��������: ";
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
		cout << "������������ ���������� �����, ������� ����� ���������� �� �����: ";
		cin >> obj.capacity;
		if (cin.fail() || obj.capacity < 0) { // �������� �� ������������ �����
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}





	return in;
}