#pragma once
#include <iostream>
#include "Snack.h"
using namespace std;

class SnackSlot
{
public:
	SnackSlot(short);
	void addSnack(Snack* snack);
	string GetSnackList();
private:
	short countInOneSlot;
	string snacklist="1";
	int countsl = 0;


};