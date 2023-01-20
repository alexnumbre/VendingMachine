#pragma once
#include <iostream>
#include "SnackSlot.h"
using namespace std;

class VendingMachine
{
public:
	VendingMachine(short slotCount);
	void loadTheSlot(SnackSlot slot);
	int getEmptySlotsCount();
	int GetcountOfSlots();
	void SetcountOfSlots(short num);
	//friend std::ostream& operator<< (std::ostream& out, const VendingMachine& point);
	
private:
	short countOfTheSlots;
	int count = 0;
	//int empty = 0;
	string arrayForSlots[100];
};