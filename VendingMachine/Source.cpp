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
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаютс€ в слот*/);

	
	slot->addSnack(bounty); //ƒобавл€ем батончик в слот
	slot->addSnack(snickers);
	slot->addSnack(twix);
	VendingMachine* machine = new VendingMachine(slotCount /* оличество слотов дл€ снеков*/);
	VendingMachine* machine1 = new VendingMachine(slotCount /* оличество слотов дл€ снеков*/);

	machine->loadTheSlot(*slot); // ѕомещаем слот обратно в аппарат

	machine->getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов дл€ снеков

	(*machine1).getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов дл€ снеков
	delete machine;
	delete slot;
	
	delete snickers;
	delete bounty;
	
}
