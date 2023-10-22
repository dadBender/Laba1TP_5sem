#include "factory.h"
#include <iostream>
using namespace std;
Factory::Factory()
{

	cout << "Вызов конструктора (Абстрактный класс)" << endl << endl;
}
Factory::~Factory()
{
	cout << "Вызов деструктора (Абстрактный класс)" << endl << endl;
}