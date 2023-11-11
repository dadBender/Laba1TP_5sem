#pragma once
#include <fstream>
#include "ship.h"
#include "keeper.h"
using namespace std;
class ship
{
public:
	ship();
	virtual ~ship();
	virtual void setVal() = 0;
};
