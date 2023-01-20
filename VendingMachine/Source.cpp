#include <iostream>
#include "SnackSlot.h"
#include "Snack.h"
#include "VendingMachine.h"
using namespace std;

int main() {
	int slotCount = 5;
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickerss");
	Snack* twix = new Snack("Twix");
	SnackSlot* slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);

	
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	slot->addSnack(twix);
	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
	VendingMachine* machine1 = new VendingMachine(slotCount /*���������� ������ ��� ������*/);

	machine->loadTheSlot(*slot); // �������� ���� ������� � �������

	machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������

	(*machine1).getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	delete machine;
	delete slot;
	
	delete snickers;
	delete bounty;
	
}
